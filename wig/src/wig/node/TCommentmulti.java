/* This file was generated by SableCC (http://www.sablecc.org/). */

package wig.node;

import wig.analysis.*;

public final class TCommentmulti extends Token
{
    public TCommentmulti(String text)
    {
        setText(text);
    }

    public TCommentmulti(String text, int line, int pos)
    {
        setText(text);
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TCommentmulti(getText(), getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTCommentmulti(this);
    }
}
