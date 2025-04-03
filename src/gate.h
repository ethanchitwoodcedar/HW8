#ifndef GATE_H
#define GATE_H

class Wire;

class Gate
{
private:
    int type;
    /*Gate types are as follows:
        AND 0
        OR 1
        XOR 2
        NAND 3
        NOR 4
        XNOR 5  */
    int gateDelay;
    Wire* input1;
    Wire* input2;
    Wire* output;
public:
    Gate(int, int, Wire*, Wire*, Wire*);
    int getDelay() const {return gateDelay;}
    Wire* getInput(int inputNum) const {return (inputNum == 0) ? input1 : input2;}
    Wire* getOutput() const {return output;}
    virtual int evaluate() const {return -1;} // 1 is true. 0 is false. -1 is undefined.
};

#endif GATE_H