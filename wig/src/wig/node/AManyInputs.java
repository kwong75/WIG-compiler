/* This file was generated by SableCC (http://www.sablecc.org/). */

package wig.node;

import java.util.*;
import wig.analysis.*;

public final class AManyInputs extends PInputs
{
    private PInputs _inputs_;
    private TComma _comma_;
    private PInput _input_;

    public AManyInputs()
    {
    }

    public AManyInputs(
        PInputs _inputs_,
        TComma _comma_,
        PInput _input_)
    {
        setInputs(_inputs_);

        setComma(_comma_);

        setInput(_input_);

    }
    public Object clone()
    {
        return new AManyInputs(
            (PInputs) cloneNode(_inputs_),
            (TComma) cloneNode(_comma_),
            (PInput) cloneNode(_input_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAManyInputs(this);
    }

    public PInputs getInputs()
    {
        return _inputs_;
    }

    public void setInputs(PInputs node)
    {
        if(_inputs_ != null)
        {
            _inputs_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _inputs_ = node;
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

    public PInput getInput()
    {
        return _input_;
    }

    public void setInput(PInput node)
    {
        if(_input_ != null)
        {
            _input_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _input_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_inputs_)
            + toString(_comma_)
            + toString(_input_);
    }

    void removeChild(Node child)
    {
        if(_inputs_ == child)
        {
            _inputs_ = null;
            return;
        }

        if(_comma_ == child)
        {
            _comma_ = null;
            return;
        }

        if(_input_ == child)
        {
            _input_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_inputs_ == oldChild)
        {
            setInputs((PInputs) newChild);
            return;
        }

        if(_comma_ == oldChild)
        {
            setComma((TComma) newChild);
            return;
        }

        if(_input_ == oldChild)
        {
            setInput((PInput) newChild);
            return;
        }

    }
}
