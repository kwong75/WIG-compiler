/* This file was generated by SableCC (http://www.sablecc.org/). */

package wig.node;

import wig.analysis.*;

public final class TType extends Token
{
    public TType()
    {
        super.setText("type");
    }

    public TType(int line, int pos)
    {
        super.setText("type");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TType(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTType(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TType text.");
    }
}
