#include "Gate.h"

Gate::Gate(int newType, int newGateDelay, Wire* newInput1, Wire* newInput2, Wire* newOutput)
{
    type = newType;
    gateDelay = newGateDelay;
    input1 = newInput1;
    input2 = newInput2;
    output = newOutput;
}