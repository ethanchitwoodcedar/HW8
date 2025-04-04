#ifndef WIRE_H
#define WIRE_H
#include <vector>
#include <string>
#include <iostream>

class Gate;

class Wire
{
private:
    int value;
    /*
        wire states are as follows:
        0 - 0 or off
        1 - 1 or on
       -1 - X or unknown/undefined
    */

    std::string name;
    std::vector<Gate*> drives;
    int index;
    std::vector<int> history;
    /*history includes past values, not including the current value.*/
public:
    Wire(int v, std::string n, int i);
    int getValue(); //{return value;}
    std::string getName();
    int getIndex();
    void setValue(int v);
    void setName(std::string n);
    void setIndex(int i);
    void printHistory();
    ~Wire();
};

#endif WIRE_H
