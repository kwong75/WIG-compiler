/* This file was generated by SableCC (http://www.sablecc.org/). */

package wig.node;

import java.util.*;
import wig.analysis.*;

public final class ANotUnaryExp extends PUnaryExp
{
    private TNot _not_;
    private PBaseExp _baseExp_;

    public ANotUnaryExp()
    {
    }

    public ANotUnaryExp(
        TNot _not_,
        PBaseExp _baseExp_)
    {
        setNot(_not_);

        setBaseExp(_baseExp_);

    }
    public Object clone()
    {
        return new ANotUnaryExp(
            (TNot) cloneNode(_not_),
            (PBaseExp) cloneNode(_baseExp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseANotUnaryExp(this);
    }

    public TNot getNot()
    {
        return _not_;
    }

    public void setNot(TNot node)
    {
        if(_not_ != null)
        {
            _not_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _not_ = node;
    }

    public PBaseExp getBaseExp()
    {
        return _baseExp_;
    }

    public void setBaseExp(PBaseExp node)
    {
        if(_baseExp_ != null)
        {
            _baseExp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _baseExp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_not_)
            + toString(_baseExp_);
    }

    void removeChild(Node child)
    {
        if(_not_ == child)
        {
            _not_ = null;
            return;
        }

        if(_baseExp_ == child)
        {
            _baseExp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_not_ == oldChild)
        {
            setNot((TNot) newChild);
            return;
        }

        if(_baseExp_ == oldChild)
        {
            setBaseExp((PBaseExp) newChild);
            return;
        }

    }
}
