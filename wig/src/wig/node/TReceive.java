/* This file was generated by SableCC (http://www.sablecc.org/). */

package wig.node;

import wig.analysis.*;

public final class TReceive extends Token
{
    public TReceive()
    {
        super.setText("receive");
    }

    public TReceive(int line, int pos)
    {
        super.setText("receive");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TReceive(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTReceive(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TReceive text.");
    }
}
