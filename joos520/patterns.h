/*
 * JOOS is Copyright (C) 1997 Laurie Hendren & Michael I. Schwartzbach
 *
 * Reproduction of all or part of this software is permitted for
 * educational or research use on condition that this copyright notice is
 * included in any copy. This software comes with no warranty of any
 * kind. In no event will the authors be liable for any damages resulting from
 * use of this software.
 *
 * email: hendren@cs.mcgill.ca, mis@brics.dk
 */

/* iload x        iload x        iload x
 * ldc 0          ldc 1          ldc 2
 * imul           imul           imul
 * ------>        ------>        ------>
 * ldc 0          iload x        iload x
 *                               dup
 *                               iadd
 */

int simplify_multiplication_right(CODE **c)
{ int x,k;
  if (is_iload(*c,&x) && 
      is_ldc_int(next(*c),&k) && 
      is_imul(next(next(*c)))) {
    if (k==0) return replace(c,3,makeCODEldc_int(0,NULL));
    else if (k==1) return replace(c,3,makeCODEiload(x,NULL));
    else if (k==2) return replace(c,3,makeCODEiload(x,
          makeCODEdup(
            makeCODEiadd(NULL))));
    return 0;
  }
  return 0;
}

/* 
 * iload x
 * istore x
 * -------->
 * 
 */
int iload_istore(CODE **c)
{ int x;
  int y;
  if (is_iload(*c,&x) &&
      is_istore(next(*c),&y) &&
      x == y ) {
    return replace(c,2,NULL);
  }
  return 0;
}

/* dup
 * astore x
 * pop
 * -------->
 * astore x
 */
int simplify_astore(CODE **c)
{ int x;
  if (is_dup(*c) &&
      is_astore(next(*c),&x) &&
      is_pop(next(next(*c)))) {
    return replace(c,3,makeCODEastore(x,NULL));
  }
  return 0;
}



/* dup
 * istore x
 * pop
 * -------->
 * istore x
 */
int simplify_istore(CODE **c)
{ int x;
  if (is_dup(*c) &&
      is_istore(next(*c),&x) &&
      is_pop(next(next(*c)))) {
    return replace(c,3,makeCODEistore(x,NULL));
  }
  return 0;
}



/* iload x
 * ldc k   (0<=k<=127)
 * iadd
 * istore x
 * --------->
 * iinc x k
 */ 
int positive_increment(CODE **c)
{ int x,y,k;
  if (is_iload(*c,&x) &&
      is_ldc_int(next(*c),&k) &&
      is_iadd(next(next(*c))) &&
      is_istore(next(next(next(*c))),&y) &&
      x==y && 0<=k && k<=127) {
    return replace(c,4,makeCODEiinc(x,k,NULL));
  }
  return 0;
}



/* goto L1
 * ...
 * L1:
 * goto L2
 * ...
 * L2:
 * --------->
 * goto L2
 * ...
 * L1:    (reference count reduced by 1)
 * goto L2
 * ...
 * L2:    (reference count increased by 1)  
 */
int simplify_goto_goto(CODE **c)
{ int l1,l2;
  if (is_goto(*c,&l1) && is_goto(next(destination(l1)),&l2)) {
    droplabel(l1);
    copylabel(l2);
    return replace(c,1,makeCODEgoto(l2,NULL));
  }
  return 0;
}




/*
 * goto L1 || ifeq L1 || .....
 * ...
 * L1:
 * L2:
 * ----------->
 *  goto L2 || ifeq L2 || .....
 *  ....
 *  L1: (reference count reduced by 1)
 *  L2: (reference count increases by 1)
 */
int remove_redundant_label(CODE **c) {
  int lab1 ;
  int label ;
  if (uses_label(*c,&lab1) && is_label(next(destination(lab1)),&label) ) {
    droplabel(lab1) ;
    copylabel(label) ;

    switch ( (*c)->kind) {
      case gotoCK :
        return replace(c,1,makeCODEgoto(label,NULL));
      case ifeqCK :
        return replace(c,1,makeCODEifeq(label,NULL));
      case ifneCK :
        return replace(c,1,makeCODEifne(label,NULL));
      case if_acmpeqCK :
        return replace(c,1,makeCODEif_acmpeq(label,NULL));
      case if_acmpneCK :
        return replace(c,1,makeCODEif_acmpne(label,NULL));
      case ifnullCK :
        return replace(c,1,makeCODEifnull(label,NULL));
      case ifnonnullCK :
        return replace(c,1,makeCODEifnonnull(label,NULL));
      case if_icmpeqCK :
        return replace(c,1,makeCODEif_icmpeq(label,NULL));
      case if_icmpneCK :
        return replace(c,1,makeCODEif_icmpne(label,NULL));
      case if_icmpltCK :
        return replace(c,1,makeCODEif_icmplt(label,NULL));
      case if_icmpleCK :
        return replace(c,1,makeCODEif_icmple(label,NULL));
      case if_icmpgeCK :
        return replace(c,1,makeCODEif_icmpge(label,NULL));
      case if_icmpgtCK :
        return replace(c,1,makeCODEif_icmpgt(label,NULL));
      default:
        return 0 ;
    }
  }
  return 0 ;
}




/* aload || iload || aconst || ldc_int || ldc_string _x
 * dup     
 * aload || iload || aconst || ldc_int || ldc_string _ y
 * swap
 * putfield zzz
 * pop
 * --------->
 * aload_y
 * aload_x
 * putfield zzz
 *
 */
int simplify_loadputfield(CODE **c)
{
  int code1, code2;
  code1 = is_simplepush(*c);
  code2 = is_simplepush(nextby(*c,2));
  char *field;

  if (code1 && 
      is_dup(next(*c)) && 
      code2 &&
      is_swap(next(next(next(*c)))) &&
      is_putfield(next(next(next(next(*c)))),&field)) {
    CODE *putField = makeCODEputfield(field,NULL);
    CODE *load = makefromCODEsimplepush(*c,putField);
    return replace (c,6,makefromCODEsimplepush(nextby(*c,2),load));
  }
  return 0;
}




/*
 * goto L
 * L:
 * ----------->
 * L: (-1 to label)
 */
int useless_goto(CODE **c)
{ int l1;
  if (is_goto(*c,&l1) && next(*c) == destination(l1) ) {
    droplabel(l1) ;
    return replace(c,2,makeCODElabel(l1,NULL));
  }
  return 0;
}




/*
 * goto L1
 * ....
 * L1:
 *  return / ireturn / areturn
 *  ------------->
 *  return / ireturn / areturn
 *  
 * ....
 *  L1: (decrease reference to L1)
 *  return / ireturn / areturn
 */
int goto_return(CODE **c) {
  int goto1;
  if (is_goto(*c,&goto1)) {
    CODE *r = next(destination(goto1)) ;
    if (is_return(r) || is_ireturn(r) || is_areturn(r) ) {
      droplabel(goto1) ;
      switch( r->kind) {
        case returnCK:
          return replace(c,1,makeCODEreturn(NULL)) ;
        case ireturnCK:
          return replace(c,1,makeCODEireturn(NULL)) ;
        case areturnCK:
          return replace(c,1,makeCODEareturn(NULL)) ;
        default:
          return 0 ;
      }
    }
  }
  return 0 ;
}

/*
   int simplify_cmp_expr(CODE **c) {
   int l1,l2 ;
   int lab1;
   int val = 8 ;
   if (is_if_icmplt(*c,&l1)) {
   CODE* n = next(*c) ;
   if ( is_ldc_int(n,&val) && val == 0 ) {
   n = next(n) ;
   if ( is_goto(n,&l2) ) {
   n = next(n) ;
   if (is_label(n,&lab1) && destination(l1) == n) {
   n = next(n) ;
   if ( is_ldc_int(n,&val) &&  val == 1 ) {
   n = next(n) ;
   if ( destination(l2) == n ) {
   return replace(c,3,makeCODElcmp(
   makeCODEiand(2,
   makeCODEishr(1,NULL)))) ;

   }
   }
   }
   }
   }
   }
   return 0 ;
   }
   */

/* CASE 1:				CASE 2:
 * return || ireturn || areturn		return || ireturn || areturn
 * uses_label label			!uses_label
 * ...					----------->
 * label				return || ireturn || areturn
 * --------->
 * return || ireturn || areturn
 * ...
 * label (-1 to label)
 */
int remove_stmt_after_return(CODE **c) {
  int lab ;

  if (is_return(*c) || is_ireturn(*c) || is_areturn(*c) ) {
    CODE* n = next(*c) ;
    if (!is_label(n,&lab) && !is_empty(n) ) {

      // Remove label if there is
      if (uses_label(n,&lab) ) {
        droplabel(lab) ;
      }

      // Replace
      switch ( (*c)->kind ) {
        case returnCK:
          return replace(c,2,makeCODEreturn(NULL)) ;
        case ireturnCK:
          return replace(c,2,makeCODEireturn(NULL)) ;
        case areturnCK:
          return replace(c,2,makeCODEareturn(NULL)) ;
        default:
          return 0 ;
      }
    }
  }
  return 0;
}

/* 
 * if_statement lab1
 * ldc 0
 * goto lab2
 * lab1:
 * ldc 1
 * lab2:
 * ifeq lab_else
 * ...
 * lab_else:
 * -----------> 2 cases
 * CASE 1 lab1 && lab2 are deadlabel:
 * if_opstatement lab_else
 * ...
 * lab_else 
 * CASE 2 else:
 * if_opstatement lab_else
 * lab1 (-1 to label)
 * ldc 1
 * lab2 (-1 to label)
 * ifeq lab_else
 * ...
 * lab_else (+1 to label)
 */
int simplify_ificmp(CODE **c) {
  int label ;
  int valfalse = 0;
  if (is_if_icmpgt(*c,&label) || is_if_icmpge(*c,&label) || is_if_icmpeq(*c,&label) ||
      is_if_icmplt(*c,&label) ||is_if_icmple(*c,&label) |is_if_icmpne(*c,&label) ||
      is_if_acmpeq(*c,&label) || is_if_acmpne(*c,&label) ) {
    CODE* n = next (*c) ;
    if (is_ldc_int(n,&valfalse) && valfalse == 0) {
      int goto1 ;
      n = next (n) ;
      if (is_goto(n,&goto1) ) {
        int lab1 ;
        n = next (n) ;
        if (is_label(n,&lab1) && label == lab1) {
          int valtrue = 0 ; 
          n = next (n) ;
          if (is_ldc_int(n,&valtrue) && valtrue == 1) {
            int lab2 ;
            n = next (n) ;
            if (is_label(n,&lab2) && goto1 == lab2 ) {
              int lab_else ;
              n = next (n) ;
              if (is_ifeq(n,&lab_else) ) {
                CODE *labelcode;

                // Decrement label usage
                droplabel(label) ;
                droplabel(goto1) ;

                // Replace code
                //Make label

                if (deadlabel(label) && deadlabel(goto1)) { 
                  labelcode = NULL ;//makeCODElabel(lab1,makeCODEldc_int(valtrue,makeCODElabel(lab2,NULL)))  ;
                } else {
                  copylabel(lab_else);
                  labelcode = makeCODElabel(lab1,makeCODEldc_int(valtrue,makeCODElabel(lab2, makeCODEifeq(lab_else, NULL))))  ;
                }

                switch ( (*c)->kind) {
                  case if_icmpltCK:
                    return replace(c,7,makeCODEif_icmpge(lab_else,labelcode)) ;
                  case if_icmpleCK:
                    return replace(c,7,makeCODEif_icmpgt(lab_else,labelcode)) ;
                  case if_icmpeqCK:
                    return replace(c,7,makeCODEif_icmpne(lab_else,labelcode)) ;
                  case if_icmpneCK:
                    return replace(c,7,makeCODEif_icmpeq(lab_else,labelcode)) ;
                  case if_icmpgeCK:
                    return replace(c,7,makeCODEif_icmplt(lab_else,labelcode)) ;
                  case if_icmpgtCK:
                    return replace(c,7,makeCODEif_icmple(lab_else,labelcode)) ;
                  case if_acmpeqCK:
                    return replace(c,7,makeCODEif_acmpne(lab_else,labelcode)) ;
                  case if_acmpneCK:
                    return replace(c,7,makeCODEif_acmpeq(lab_else,labelcode)) ;
                  default:
                    return 0 ;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0 ;
}
/*  ifnull null_y
 *  goto stop_z
 *  null_y: 
 *  ...
 *  stop_z:
 *  --------> and vice-versa
 *  ifnonnull stop_z
 *  null_y: (-1 to label)
 *  ...
 *  stop_z:
 */
int simplify_ifnull(CODE **c) {
  int iflabel, gotolabel, labellabel;
  if ( (is_ifnull(*c,&iflabel) || is_ifnonnull(*c, &iflabel)) && is_goto(next(*c), &gotolabel) && is_label(nextby(*c,2),&labellabel) ) {
    if (iflabel == labellabel) {
      //Drop one from the if
      droplabel(iflabel);
      CODE *tobeadd;
      switch((*c)->kind) {
        case ifnullCK: tobeadd = makeCODEifnonnull(gotolabel,NULL);
                       break;
        case ifnonnullCK: tobeadd = makeCODEifnull(gotolabel,NULL);
                          break;
        default: return 0;
      }
      return replace(c,2,tobeadd);
    }
  }
  return 0;
}

/* LABEL: (dead)
 * -------->
 * 
 */
int remove_deadlabel(CODE **c) {
  int label;
  if (is_label(*c, &label) && deadlabel(label)) {
    return replace(c,1,NULL) ;
  }
  return 0;
}

/* dup
 * aload || iload || aconst || ldc_int || ldc_string _x
 * swap
 * putfield yyy
 * pop
 * -------->
 * aload || iload || aconst || ldc_int || ldc_string _x
 * swap
 * putfield yyy
 */
int simplify_duppop(CODE **c) {
  char *putfield;
  if (is_dup(*c) &&
      is_simplepush(next(*c)) &&
      is_swap(nextby(*c,2)) &&
      is_putfield(nextby(*c,3),&putfield) &&
      is_pop(nextby(*c,4))) {
    CODE *tail = makeCODEswap(makeCODEputfield(putfield,NULL));
    return replace(c,5,makefromCODEsimplepush(next(*c),tail));	
  }
  return 0;
}

/* ldc x
 * dup
 * ifnonnull y
 * pop
 * ldc "null"
 * y:
 * -------->
 * ldc x
 * y: (-1 to label)
 */
int simplify_nevernull(CODE **c) {
  char *ldc;
  char *toss;
  int label,labellabel;
  if (is_ldc_string(*c,&ldc) && 
      is_dup(next(*c)) &&
      is_ifnonnull(nextby(*c,2),&label) &&
      is_pop(nextby(*c,3)) &&
      is_ldc_string(nextby(*c,4),&toss) &&
      is_label(nextby(*c,5),&labellabel)) {
    if (label == labellabel) {
      droplabel(label);
      return replace(c,5,makeCODEldc_string(ldc, NULL));
    }
  }
  return 0;
}


/*
 *  astore x
 *  aload x
 *  areturn
 *  ---------
 *  areturn
 *
 */
int store_load_return(CODE **c) {
  int v1, v2;
  if (is_astore(*c,&v1) && is_aload(next(*c),&v2) && v1 == v2 && is_areturn(next(next(*c))) ) {
    return replace(c,3,makeCODEareturn(NULL)) ;
  }
  return 0 ;
}


int init_patterns()
{ ADD_PATTERN(simplify_multiplication_right);
  ADD_PATTERN(simplify_ificmp);
  ADD_PATTERN(simplify_astore);
  ADD_PATTERN(positive_increment);
  ADD_PATTERN(simplify_goto_goto);
  ADD_PATTERN(simplify_istore);
  ADD_PATTERN(iload_istore) ;
  ADD_PATTERN(useless_goto);
  ADD_PATTERN(remove_stmt_after_return) ;
  ADD_PATTERN(simplify_loadputfield);
  ADD_PATTERN(simplify_ifnull);
  ADD_PATTERN(remove_deadlabel);
  ADD_PATTERN(simplify_duppop);
  ADD_PATTERN(simplify_nevernull) ;
  ADD_PATTERN(remove_redundant_label) ;
  ADD_PATTERN(goto_return) ;
  ADD_PATTERN(store_load_return) ;
  return 1;
}
