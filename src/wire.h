#ifndef WIRE_H
#define WIRE_H
#include <vector>
#include <iostream>

class Wire
{
private:
    int value;
    char name;
    //string name;
    std::vector<Gate*> drives;
    int index;
    std::vector<int> history;
    /* data */
public:
    Wire(int v, char n, int i);
    int getValue(); //{return value;}
    char getName();
    int getIndex();
    void setValue(int v);
    void setName(char n);
    void setIndex(int i);
    void printHistory();
    ~Wire();
};

#endif WIRE_H