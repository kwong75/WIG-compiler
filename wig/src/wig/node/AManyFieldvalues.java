/* This file was generated by SableCC (http://www.sablecc.org/). */

package wig.node;

import java.util.*;
import wig.analysis.*;

public final class AManyFieldvalues extends PFieldvalues
{
    private PFieldvalues _fieldvalues_;
    private TComma _comma_;
    private PFieldvalue _fieldvalue_;

    public AManyFieldvalues()
    {
    }

    public AManyFieldvalues(
        PFieldvalues _fieldvalues_,
        TComma _comma_,
        PFieldvalue _fieldvalue_)
    {
        setFieldvalues(_fieldvalues_);

        setComma(_comma_);

        setFieldvalue(_fieldvalue_);

    }
    public Object clone()
    {
        return new AManyFieldvalues(
            (PFieldvalues) cloneNode(_fieldvalues_),
            (TComma) cloneNode(_comma_),
            (PFieldvalue) cloneNode(_fieldvalue_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAManyFieldvalues(this);
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

    public TComma getComma()
    {
        return _comma_;
    }

    public void setComma(TComma node)
    {
        if(_comma_ != null)
        {
            _comma_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _comma_ = node;
    }

    public PFieldvalue getFieldvalue()
    {
        return _fieldvalue_;
    }

    public void setFieldvalue(PFieldvalue node)
    {
        if(_fieldvalue_ != null)
        {
            _fieldvalue_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _fieldvalue_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_fieldvalues_)
            + toString(_comma_)
            + toString(_fieldvalue_);
    }

    void removeChild(Node child)
    {
        if(_fieldvalues_ == child)
        {
            _fieldvalues_ = null;
            return;
        }

        if(_comma_ == child)
        {
            _comma_ = null;
            return;
        }

        if(_fieldvalue_ == child)
        {
            _fieldvalue_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_fieldvalues_ == oldChild)
        {
            setFieldvalues((PFieldvalues) newChild);
            return;
        }

        if(_comma_ == oldChild)
        {
            setComma((TComma) newChild);
            return;
        }

        if(_fieldvalue_ == oldChild)
        {
            setFieldvalue((PFieldvalue) newChild);
            return;
        }

    }
}