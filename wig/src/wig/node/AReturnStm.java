/* This file was generated by SableCC (http://www.sablecc.org/). */

package wig.node;

import java.util.*;
import wig.analysis.*;

public final class AReturnStm extends PStm
{
    private TReturn _return_;
    private TSemicolon _semicolon_;

    public AReturnStm()
    {
    }

    public AReturnStm(
        TReturn _return_,
        TSemicolon _semicolon_)
    {
        setReturn(_return_);

        setSemicolon(_semicolon_);

    }
    public Object clone()
    {
        return new AReturnStm(
            (TReturn) cloneNode(_return_),
            (TSemicolon) cloneNode(_semicolon_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAReturnStm(this);
    }

    public TReturn getReturn()
    {
        return _return_;
    }

    public void setReturn(TReturn node)
    {
        if(_return_ != null)
        {
            _return_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _return_ = node;
    }

    public TSemicolon getSemicolon()
    {
        return _semicolon_;
    }

    public void setSemicolon(TSemicolon node)
    {
        if(_semicolon_ != null)
        {
            _semicolon_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _semicolon_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_return_)
            + toString(_semicolon_);
    }

    void removeChild(Node child)
    {
        if(_return_ == child)
        {
            _return_ = null;
            return;
        }

        if(_semicolon_ == child)
        {
            _semicolon_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_return_ == oldChild)
        {
            setReturn((TReturn) newChild);
            return;
        }

        if(_semicolon_ == oldChild)
        {
            setSemicolon((TSemicolon) newChild);
            return;
        }

    }
}
