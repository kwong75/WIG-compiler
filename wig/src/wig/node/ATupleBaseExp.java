/* This file was generated by SableCC (http://www.sablecc.org/). */

package wig.node;

import java.util.*;
import wig.analysis.*;

public final class ATupleBaseExp extends PBaseExp
{
    private TTuple _tuple_;
    private TLBrace _lBrace_;
    private PFieldvalues _fieldvalues_;
    private TRBrace _rBrace_;

    public ATupleBaseExp()
    {
    }

    public ATupleBaseExp(
        TTuple _tuple_,
        TLBrace _lBrace_,
        PFieldvalues _fieldvalues_,
        TRBrace _rBrace_)
    {
        setTuple(_tuple_);

        setLBrace(_lBrace_);

        setFieldvalues(_fieldvalues_);

        setRBrace(_rBrace_);

    }
    public Object clone()
    {
        return new ATupleBaseExp(
            (TTuple) cloneNode(_tuple_),
            (TLBrace) cloneNode(_lBrace_),
            (PFieldvalues) cloneNode(_fieldvalues_),
            (TRBrace) cloneNode(_rBrace_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseATupleBaseExp(this);
    }

    public TTuple getTuple()
    {
        return _tuple_;
    }

    public void setTuple(TTuple node)
    {
        if(_tuple_ != null)
        {
            _tuple_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _tuple_ = node;
    }

    public TLBrace getLBrace()
    {
        return _lBrace_;
    }

    public void setLBrace(TLBrace node)
    {
        if(_lBrace_ != null)
        {
            _lBrace_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _lBrace_ = node;
    }

    public PFieldvalues getFieldvalues()
    {
        return _fieldvalues_;
    }

    public void setFieldvalues(PFieldvalues node)
    {
        if(_fieldvalues_ != null)
        {
            _fieldvalues_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _fieldvalues_ = node;
    }

    public TRBrace getRBrace()
    {
        return _rBrace_;
    }

    public void setRBrace(TRBrace node)
    {
        if(_rBrace_ != null)
        {
            _rBrace_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _rBrace_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_tuple_)
            + toString(_lBrace_)
            + toString(_fieldvalues_)
            + toString(_rBrace_);
    }

    void removeChild(Node child)
    {
        if(_tuple_ == child)
        {
            _tuple_ = null;
            return;
        }

        if(_lBrace_ == child)
        {
            _lBrace_ = null;
            return;
        }

        if(_fieldvalues_ == child)
        {
            _fieldvalues_ = null;
            return;
        }

        if(_rBrace_ == child)
        {
            _rBrace_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_tuple_ == oldChild)
        {
            setTuple((TTuple) newChild);
            return;
        }

        if(_lBrace_ == oldChild)
        {
            setLBrace((TLBrace) newChild);
            return;
        }

        if(_fieldvalues_ == oldChild)
        {
            setFieldvalues((PFieldvalues) newChild);
            return;
        }

        if(_rBrace_ == oldChild)
        {
            setRBrace((TRBrace) newChild);
            return;
        }

    }
}