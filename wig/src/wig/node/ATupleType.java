/* This file was generated by SableCC (http://www.sablecc.org/). */

package wig.node;

import java.util.*;
import wig.analysis.*;

public final class ATupleType extends PType
{
    private TTuple _tuple_;
    private TIdentifier _identifier_;

    public ATupleType()
    {
    }

    public ATupleType(
        TTuple _tuple_,
        TIdentifier _identifier_)
    {
        setTuple(_tuple_);

        setIdentifier(_identifier_);

    }
    public Object clone()
    {
        return new ATupleType(
            (TTuple) cloneNode(_tuple_),
            (TIdentifier) cloneNode(_identifier_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseATupleType(this);
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

    public TIdentifier getIdentifier()
    {
        return _identifier_;
    }

    public void setIdentifier(TIdentifier node)
    {
        if(_identifier_ != null)
        {
            _identifier_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _identifier_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_tuple_)
            + toString(_identifier_);
    }

    void removeChild(Node child)
    {
        if(_tuple_ == child)
        {
            _tuple_ = null;
            return;
        }

        if(_identifier_ == child)
        {
            _identifier_ = null;
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

        if(_identifier_ == oldChild)
        {
            setIdentifier((TIdentifier) newChild);
            return;
        }

    }
}
