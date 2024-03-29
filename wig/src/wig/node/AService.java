/* This file was generated by SableCC (http://www.sablecc.org/). */

package wig.node;

import java.util.*;
import wig.analysis.*;

public final class AService extends PService
{
    private TService _service_;
    private TLBrace _lBrace_;
    private final LinkedList _html_ = new TypedLinkedList(new Html_Cast());
    private final LinkedList _schema_ = new TypedLinkedList(new Schema_Cast());
    private final LinkedList _variable_ = new TypedLinkedList(new Variable_Cast());
    private final LinkedList _function_ = new TypedLinkedList(new Function_Cast());
    private final LinkedList _session_ = new TypedLinkedList(new Session_Cast());
    private TRBrace _rBrace_;

    public AService()
    {
    }

    public AService(
        TService _service_,
        TLBrace _lBrace_,
        List _html_,
        List _schema_,
        List _variable_,
        List _function_,
        List _session_,
        TRBrace _rBrace_)
    {
        setService(_service_);

        setLBrace(_lBrace_);

        {
            this._html_.clear();
            this._html_.addAll(_html_);
        }

        {
            this._schema_.clear();
            this._schema_.addAll(_schema_);
        }

        {
            this._variable_.clear();
            this._variable_.addAll(_variable_);
        }

        {
            this._function_.clear();
            this._function_.addAll(_function_);
        }

        {
            this._session_.clear();
            this._session_.addAll(_session_);
        }

        setRBrace(_rBrace_);

    }
    public Object clone()
    {
        return new AService(
            (TService) cloneNode(_service_),
            (TLBrace) cloneNode(_lBrace_),
            cloneList(_html_),
            cloneList(_schema_),
            cloneList(_variable_),
            cloneList(_function_),
            cloneList(_session_),
            (TRBrace) cloneNode(_rBrace_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAService(this);
    }

    public TService getService()
    {
        return _service_;
    }

    public void setService(TService node)
    {
        if(_service_ != null)
        {
            _service_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _service_ = node;
    }

    public TLBrace getLBrace()
    {
        return _lBrace_;
    }

    public void setLBrace(TLBrace node)
    {
        if(_lBrace_ != null)
        {
            _lBrace_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _lBrace_ = node;
    }

    public LinkedList getHtml()
    {
        return _html_;
    }

    public void setHtml(List list)
    {
        _html_.clear();
        _html_.addAll(list);
    }

    public LinkedList getSchema()
    {
        return _schema_;
    }

    public void setSchema(List list)
    {
        _schema_.clear();
        _schema_.addAll(list);
    }

    public LinkedList getVariable()
    {
        return _variable_;
    }

    public void setVariable(List list)
    {
        _variable_.clear();
        _variable_.addAll(list);
    }

    public LinkedList getFunction()
    {
        return _function_;
    }

    public void setFunction(List list)
    {
        _function_.clear();
        _function_.addAll(list);
    }

    public LinkedList getSession()
    {
        return _session_;
    }

    public void setSession(List list)
    {
        _session_.clear();
        _session_.addAll(list);
    }

    public TRBrace getRBrace()
    {
        return _rBrace_;
    }

    public void setRBrace(TRBrace node)
    {
        if(_rBrace_ != null)
        {
            _rBrace_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _rBrace_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_service_)
            + toString(_lBrace_)
            + toString(_html_)
            + toString(_schema_)
            + toString(_variable_)
            + toString(_function_)
            + toString(_session_)
            + toString(_rBrace_);
    }

    void removeChild(Node child)
    {
        if(_service_ == child)
        {
            _service_ = null;
            return;
        }

        if(_lBrace_ == child)
        {
            _lBrace_ = null;
            return;
        }

        if(_html_.remove(child))
        {
            return;
        }

        if(_schema_.remove(child))
        {
            return;
        }

        if(_variable_.remove(child))
        {
            return;
        }

        if(_function_.remove(child))
        {
            return;
        }

        if(_session_.remove(child))
        {
            return;
        }

        if(_rBrace_ == child)
        {
            _rBrace_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_service_ == oldChild)
        {
            setService((TService) newChild);
            return;
        }

        if(_lBrace_ == oldChild)
        {
            setLBrace((TLBrace) newChild);
            return;
        }

        for(ListIterator i = _html_.listIterator(); i.hasNext();)
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

        for(ListIterator i = _schema_.listIterator(); i.hasNext();)
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

        for(ListIterator i = _variable_.listIterator(); i.hasNext();)
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

        for(ListIterator i = _function_.listIterator(); i.hasNext();)
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

        for(ListIterator i = _session_.listIterator(); i.hasNext();)
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

        if(_rBrace_ == oldChild)
        {
            setRBrace((TRBrace) newChild);
            return;
        }

    }

    private class Html_Cast implements Cast
    {
        public Object cast(Object o)
        {
            PHtml node = (PHtml) o;

            if((node.parent() != null) &&
                (node.parent() != AService.this))
            {
                node.parent().removeChild(node);
            }

            if((node.parent() == null) ||
                (node.parent() != AService.this))
            {
                node.parent(AService.this);
            }

            return node;
        }
    }

    private class Schema_Cast implements Cast
    {
        public Object cast(Object o)
        {
            PSchema node = (PSchema) o;

            if((node.parent() != null) &&
                (node.parent() != AService.this))
            {
                node.parent().removeChild(node);
            }

            if((node.parent() == null) ||
                (node.parent() != AService.this))
            {
                node.parent(AService.this);
            }

            return node;
        }
    }

    private class Variable_Cast implements Cast
    {
        public Object cast(Object o)
        {
            PVariable node = (PVariable) o;

            if((node.parent() != null) &&
                (node.parent() != AService.this))
            {
                node.parent().removeChild(node);
            }

            if((node.parent() == null) ||
                (node.parent() != AService.this))
            {
                node.parent(AService.this);
            }

            return node;
        }
    }

    private class Function_Cast implements Cast
    {
        public Object cast(Object o)
        {
            PFunction node = (PFunction) o;

            if((node.parent() != null) &&
                (node.parent() != AService.this))
            {
                node.parent().removeChild(node);
            }

            if((node.parent() == null) ||
                (node.parent() != AService.this))
            {
                node.parent(AService.this);
            }

            return node;
        }
    }

    private class Session_Cast implements Cast
    {
        public Object cast(Object o)
        {
            PSession node = (PSession) o;

            if((node.parent() != null) &&
                (node.parent() != AService.this))
            {
                node.parent().removeChild(node);
            }

            if((node.parent() == null) ||
                (node.parent() != AService.this))
            {
                node.parent(AService.this);
            }

            return node;
        }
    }
}
