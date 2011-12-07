/* This file was generated by SableCC (http://www.sablecc.org/). */

package wig.node;

import java.util.*;
import wig.analysis.*;

public final class ANegUnaryExp extends PUnaryExp
{
    private TMinus _minus_;
    private PBaseExp _baseExp_;

    public ANegUnaryExp()
    {
    }

    public ANegUnaryExp(
        TMinus _minus_,
        PBaseExp _baseExp_)
    {
        setMinus(_minus_);

        setBaseExp(_baseExp_);

    }
    public Object clone()
    {
        return new ANegUnaryExp(
            (TMinus) cloneNode(_minus_),
            (PBaseExp) cloneNode(_baseExp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseANegUnaryExp(this);
    }

    public TMinus getMinus()
    {
        return _minus_;
    }

    public void setMinus(TMinus node)
    {
        if(_minus_ != null)
        {
            _minus_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _minus_ = node;
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
            + toString(_minus_)
            + toString(_baseExp_);
    }

    void removeChild(Node child)
    {
        if(_minus_ == child)
        {
            _minus_ = null;
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
        if(_minus_ == oldChild)
        {
            setMinus((TMinus) newChild);
            return;
        }

        if(_baseExp_ == oldChild)
        {
            setBaseExp((PBaseExp) newChild);
            return;
        }

    }
}
