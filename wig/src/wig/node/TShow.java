/* This file was generated by SableCC (http://www.sablecc.org/). */

package wig.node;

import wig.analysis.*;

public final class TShow extends Token
{
    public TShow()
    {
        super.setText("show");
    }

    public TShow(int line, int pos)
    {
        super.setText("show");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TShow(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTShow(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TShow text.");
    }
}
