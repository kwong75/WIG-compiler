/* This file was generated by SableCC (http://www.sablecc.org/). */

package wig.node;

import java.util.*;
import wig.analysis.*;

public final class ASelectHtmlbody extends PHtmlbody
{
    private TLt _lt_;
    private TSelect _selectTag_;
    private final LinkedList _inputattr_ = new TypedLinkedList(new Inputattr_Cast());
    private TGt _firstGt_;
    private final LinkedList _htmlbody_ = new TypedLinkedList(new Htmlbody_Cast());
    private TLtSlash _ltSlash_;
    private TSelect _select_;
    private TGt _secondGt_;

    public ASelectHtmlbody()
    {
    }

    public ASelectHtmlbody(
        TLt _lt_,
        TSelect _selectTag_,
        List _inputattr_,
        TGt _firstGt_,
        List _htmlbody_,
        TLtSlash _ltSlash_,
        TSelect _select_,
        TGt _secondGt_)
    {
        setLt(_lt_);

        setSelectTag(_selectTag_);

        {
            this._inputattr_.clear();
            this._inputattr_.addAll(_inputattr_);
        }

        setFirstGt(_firstGt_);

        {
            this._htmlbody_.clear();
            this._htmlbody_.addAll(_htmlbody_);
        }

        setLtSlash(_ltSlash_);

        setSelect(_select_);

        setSecondGt(_secondGt_);

    }
    public Object clone()
    {
        return new ASelectHtmlbody(
            (TLt) cloneNode(_lt_),
            (TSelect) cloneNode(_selectTag_),
            cloneList(_inputattr_),
            (TGt) cloneNode(_firstGt_),
            cloneList(_htmlbody_),
            (TLtSlash) cloneNode(_ltSlash_),
            (TSelect) cloneNode(_select_),
            (TGt) cloneNode(_secondGt_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseASelectHtmlbody(this);
    }

    public TLt getLt()
    {
        return _lt_;
    }

    public void setLt(TLt node)
    {
        if(_lt_ != null)
        {
            _lt_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _lt_ = node;
    }

    public TSelect getSelectTag()
    {
        return _selectTag_;
    }

    public void setSelectTag(TSelect node)
    {
        if(_selectTag_ != null)
        {
            _selectTag_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _selectTag_ = node;
    }

    public LinkedList getInputattr()
    {
        return _inputattr_;
    }

    public void setInputattr(List list)
    {
        _inputattr_.clear();
        _inputattr_.addAll(list);
    }

    public TGt getFirstGt()
    {
        return _firstGt_;
    }

    public void setFirstGt(TGt node)
    {
        if(_firstGt_ != null)
        {
            _firstGt_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _firstGt_ = node;
    }

    public LinkedList getHtmlbody()
    {
        return _htmlbody_;
    }

    public void setHtmlbody(List list)
    {
        _htmlbody_.clear();
        _htmlbody_.addAll(list);
    }

    public TLtSlash getLtSlash()
    {
        return _ltSlash_;
    }

    public void setLtSlash(TLtSlash node)
    {
        if(_ltSlash_ != null)
        {
            _ltSlash_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _ltSlash_ = node;
    }

    public TSelect getSelect()
    {
        return _select_;
    }

    public void setSelect(TSelect node)
    {
        if(_select_ != null)
        {
            _select_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _select_ = node;
    }

    public TGt getSecondGt()
    {
        return _secondGt_;
    }

    public void setSecondGt(TGt node)
    {
        if(_secondGt_ != null)
        {
            _secondGt_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _secondGt_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_lt_)
            + toString(_selectTag_)
            + toString(_inputattr_)
            + toString(_firstGt_)
            + toString(_htmlbody_)
            + toString(_ltSlash_)
            + toString(_select_)
            + toString(_secondGt_);
    }

    void removeChild(Node child)
    {
        if(_lt_ == child)
        {
            _lt_ = null;
            return;
        }

        if(_selectTag_ == child)
        {
            _selectTag_ = null;
            return;
        }

        if(_inputattr_.remove(child))
        {
            return;
        }

        if(_firstGt_ == child)
        {
            _firstGt_ = null;
            return;
        }

        if(_htmlbody_.remove(child))
        {
            return;
        }

        if(_ltSlash_ == child)
        {
            _ltSlash_ = null;
            return;
        }

        if(_select_ == child)
        {
            _select_ = null;
            return;
        }

        if(_secondGt_ == child)
        {
            _secondGt_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_lt_ == oldChild)
        {
            setLt((TLt) newChild);
            return;
        }

        if(_selectTag_ == oldChild)
        {
            setSelectTag((TSelect) newChild);
            return;
        }

        for(ListIterator i = _inputattr_.listIterator(); i.hasNext();)
        {
            if(i.next() == oldChild)
            {
                if(newChild != null)
                {
                    i.set(newChild);
                    oldChild.parent(null);
                    return;
                }

                i.remove();
                oldChild.parent(null);
                return;
            }
        }

        if(_firstGt_ == oldChild)
        {
            setFirstGt((TGt) newChild);
            return;
        }

        for(ListIterator i = _htmlbody_.listIterator(); i.hasNext();)
        {
            if(i.next() == oldChild)
            {
                if(newChild != null)
                {
                    i.set(newChild);
                    oldChild.parent(null);
                    return;
                }

                i.remove();
                oldChild.parent(null);
                return;
            }
        }

        if(_ltSlash_ == oldChild)
        {
            setLtSlash((TLtSlash) newChild);
            return;
        }

        if(_select_ == oldChild)
        {
            setSelect((TSelect) newChild);
            return;
        }

        if(_secondGt_ == oldChild)
        {
            setSecondGt((TGt) newChild);
            return;
        }

    }

    private class Inputattr_Cast implements Cast
    {
        public Object cast(Object o)
        {
            PInputattr node = (PInputattr) o;

            if((node.parent() != null) &&
                (node.parent() != ASelectHtmlbody.this))
            {
                node.parent().removeChild(node);
            }

            if((node.parent() == null) ||
                (node.parent() != ASelectHtmlbody.this))
            {
                node.parent(ASelectHtmlbody.this);
            }

            return node;
        }
    }

    private class Htmlbody_Cast implements Cast
    {
        public Object cast(Object o)
        {
            PHtmlbody node = (PHtmlbody) o;

            if((node.parent() != null) &&
                (node.parent() != ASelectHtmlbody.this))
            {
                node.parent().removeChild(node);
            }

            if((node.parent() == null) ||
                (node.parent() != ASelectHtmlbody.this))
            {
                node.parent(ASelectHtmlbody.this);
            }

            return node;
        }
    }
}
