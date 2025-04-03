#ifndef WIRE_H
#define WIRE_H

class Wire
{
private:
    int value;
    /* data */
public:
    Wire(/* args */);
    int getValue() {return value;}
    ~Wire();
};

#endif WIRE_H