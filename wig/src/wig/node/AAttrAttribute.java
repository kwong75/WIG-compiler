/* This file was generated by SableCC (http://www.sablecc.org/). */

package wig.node;

import java.util.*;
import wig.analysis.*;

public final class AAttrAttribute extends PAttribute
{
    private PAttr _attr_;

    public AAttrAttribute()
    {
    }

    public AAttrAttribute(
        PAttr _attr_)
    {
        setAttr(_attr_);

    }
    public Object clone()
    {
        return new AAttrAttribute(
            (PAttr) cloneNode(_attr_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAAttrAttribute(this);
    }

    public PAttr getAttr()
    {
        return _attr_;
    }

    public void setAttr(PAttr node)
    {
        if(_attr_ != null)
        {
            _attr_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _attr_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_attr_);
    }

    void removeChild(Node child)
    {
        if(_attr_ == child)
        {
            _attr_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_attr_ == oldChild)
        {
            setAttr((PAttr) newChild);
            return;
        }

    }
}
