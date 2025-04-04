#ifndef WIRE_H
#define WIRE_H
#include <vector>
#include <string>
#include <iostream>

class Wire
{
private:
    int value;
    std::string name;
    //string name;
    std::vector<Gate*> drives;
    int index;
    std::vector<int> history;
    /* data */
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