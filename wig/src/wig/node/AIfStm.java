/* This file was generated by SableCC (http://www.sablecc.org/). */

package wig.node;

import java.util.*;
import wig.analysis.*;

public final class AIfStm extends PStm
{
    private TIf _if_;
    private TLPar _lPar_;
    private PExp _exp_;
    private TRPar _rPar_;
    private PStm _stm_;

    public AIfStm()
    {
    }

    public AIfStm(
        TIf _if_,
        TLPar _lPar_,
        PExp _exp_,
        TRPar _rPar_,
        PStm _stm_)
    {
        setIf(_if_);

        setLPar(_lPar_);

        setExp(_exp_);

        setRPar(_rPar_);

        setStm(_stm_);

    }
    public Object clone()
    {
        return new AIfStm(
            (TIf) cloneNode(_if_),
            (TLPar) cloneNode(_lPar_),
            (PExp) cloneNode(_exp_),
            (TRPar) cloneNode(_rPar_),
            (PStm) cloneNode(_stm_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAIfStm(this);
    }

    public TIf getIf()
    {
        return _if_;
    }

    public void setIf(TIf node)
    {
        if(_if_ != null)
        {
            _if_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _if_ = node;
    }

    public TLPar getLPar()
    {
        return _lPar_;
    }

    public void setLPar(TLPar node)
    {
        if(_lPar_ != null)
        {
            _lPar_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _lPar_ = node;
    }

    public PExp getExp()
    {
        return _exp_;
    }

    public void setExp(PExp node)
    {
        if(_exp_ != null)
        {
            _exp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _exp_ = node;
    }

    public TRPar getRPar()
    {
        return _rPar_;
    }

    public void setRPar(TRPar node)
    {
        if(_rPar_ != null)
        {
            _rPar_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _rPar_ = node;
    }

    public PStm getStm()
    {
        return _stm_;
    }

    public void setStm(PStm node)
    {
        if(_stm_ != null)
        {
            _stm_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _stm_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_if_)
            + toString(_lPar_)
            + toString(_exp_)
            + toString(_rPar_)
            + toString(_stm_);
    }

    void removeChild(Node child)
    {
        if(_if_ == child)
        {
            _if_ = null;
            return;
        }

        if(_lPar_ == child)
        {
            _lPar_ = null;
            return;
        }

        if(_exp_ == child)
        {
            _exp_ = null;
            return;
        }

        if(_rPar_ == child)
        {
            _rPar_ = null;
            return;
        }

        if(_stm_ == child)
        {
            _stm_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_if_ == oldChild)
        {
            setIf((TIf) newChild);
            return;
        }

        if(_lPar_ == oldChild)
        {
            setLPar((TLPar) newChild);
            return;
        }

        if(_exp_ == oldChild)
        {
            setExp((PExp) newChild);
            return;
        }

        if(_rPar_ == oldChild)
        {
            setRPar((TRPar) newChild);
            return;
        }

        if(_stm_ == oldChild)
        {
            setStm((PStm) newChild);
            return;
        }

    }
}
