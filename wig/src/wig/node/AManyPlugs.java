/* This file was generated by SableCC (http://www.sablecc.org/). */

package wig.node;

import java.util.*;
import wig.analysis.*;

public final class AManyPlugs extends PPlugs
{
    private PPlugs _plugs_;
    private TComma _comma_;
    private PPlug _plug_;

    public AManyPlugs()
    {
    }

    public AManyPlugs(
        PPlugs _plugs_,
        TComma _comma_,
        PPlug _plug_)
    {
        setPlugs(_plugs_);

        setComma(_comma_);

        setPlug(_plug_);

    }
    public Object clone()
    {
        return new AManyPlugs(
            (PPlugs) cloneNode(_plugs_),
            (TComma) cloneNode(_comma_),
            (PPlug) cloneNode(_plug_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAManyPlugs(this);
    }

    public PPlugs getPlugs()
    {
        return _plugs_;
    }

    public void setPlugs(PPlugs node)
    {
        if(_plugs_ != null)
        {
            _plugs_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _plugs_ = node;
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

    public PPlug getPlug()
    {
        return _plug_;
    }

    public void setPlug(PPlug node)
    {
        if(_plug_ != null)
        {
            _plug_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _plug_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_plugs_)
            + toString(_comma_)
            + toString(_plug_);
    }

    void removeChild(Node child)
    {
        if(_plugs_ == child)
        {
            _plugs_ = null;
            return;
        }

        if(_comma_ == child)
        {
            _comma_ = null;
            return;
        }

        if(_plug_ == child)
        {
            _plug_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_plugs_ == oldChild)
        {
            setPlugs((PPlugs) newChild);
            return;
        }

        if(_comma_ == oldChild)
        {
            setComma((TComma) newChild);
            return;
        }

        if(_plug_ == oldChild)
        {
            setPlug((PPlug) newChild);
            return;
        }

    }
}