/* This file was generated by SableCC (http://www.sablecc.org/). */

package wig.node;

import java.util.*;
import wig.analysis.*;

public final class AOrOrExp extends POrExp
{
    private POrExp _left_;
    private TOr _or_;
    private PAndExp _right_;

    public AOrOrExp()
    {
    }

    public AOrOrExp(
        POrExp _left_,
        TOr _or_,
        PAndExp _right_)
    {
        setLeft(_left_);

        setOr(_or_);

        setRight(_right_);

    }
    public Object clone()
    {
        return new AOrOrExp(
            (POrExp) cloneNode(_left_),
            (TOr) cloneNode(_or_),
            (PAndExp) cloneNode(_right_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAOrOrExp(this);
    }

    public POrExp getLeft()
    {
        return _left_;
    }

    public void setLeft(POrExp node)
    {
        if(_left_ != null)
        {
            _left_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _left_ = node;
    }

    public TOr getOr()
    {
        return _or_;
    }

    public void setOr(TOr node)
    {
        if(_or_ != null)
        {
            _or_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _or_ = node;
    }

    public PAndExp getRight()
    {
        return _right_;
    }

    public void setRight(PAndExp node)
    {
        if(_right_ != null)
        {
            _right_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _right_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_left_)
            + toString(_or_)
            + toString(_right_);
    }

    void removeChild(Node child)
    {
        if(_left_ == child)
        {
            _left_ = null;
            return;
        }

        if(_or_ == child)
        {
            _or_ = null;
            return;
        }

        if(_right_ == child)
        {
            _right_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_left_ == oldChild)
        {
            setLeft((POrExp) newChild);
            return;
        }

        if(_or_ == oldChild)
        {
            setOr((TOr) newChild);
            return;
        }

        if(_right_ == oldChild)
        {
            setRight((PAndExp) newChild);
            return;
        }

    }
}
