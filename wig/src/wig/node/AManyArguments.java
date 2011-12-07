/* This file was generated by SableCC (http://www.sablecc.org/). */

package wig.node;

import java.util.*;
import wig.analysis.*;

public final class AManyArguments extends PArguments
{
    private PArguments _arguments_;
    private TComma _comma_;
    private PArgument _argument_;

    public AManyArguments()
    {
    }

    public AManyArguments(
        PArguments _arguments_,
        TComma _comma_,
        PArgument _argument_)
    {
        setArguments(_arguments_);

        setComma(_comma_);

        setArgument(_argument_);

    }
    public Object clone()
    {
        return new AManyArguments(
            (PArguments) cloneNode(_arguments_),
            (TComma) cloneNode(_comma_),
            (PArgument) cloneNode(_argument_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAManyArguments(this);
    }

    public PArguments getArguments()
    {
        return _arguments_;
    }

    public void setArguments(PArguments node)
    {
        if(_arguments_ != null)
        {
            _arguments_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _arguments_ = node;
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

    public PArgument getArgument()
    {
        return _argument_;
    }

    public void setArgument(PArgument node)
    {
        if(_argument_ != null)
        {
            _argument_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _argument_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_arguments_)
            + toString(_comma_)
            + toString(_argument_);
    }

    void removeChild(Node child)
    {
        if(_arguments_ == child)
        {
            _arguments_ = null;
            return;
        }

        if(_comma_ == child)
        {
            _comma_ = null;
            return;
        }

        if(_argument_ == child)
        {
            _argument_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_arguments_ == oldChild)
        {
            setArguments((PArguments) newChild);
            return;
        }

        if(_comma_ == oldChild)
        {
            setComma((TComma) newChild);
            return;
        }

        if(_argument_ == oldChild)
        {
            setArgument((PArgument) newChild);
            return;
        }

    }
}