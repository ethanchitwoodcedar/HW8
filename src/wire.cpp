#include "Wire.h"

Wire::Wire(int v = 0, char n = '-', int i = 0)
{
    value = v;
    name = n;
    index = i;

}

int Wire::getValue() {
    return value;
}

char Wire::getName() {
    return name;
}

int Wire::getIndex() {
    return index;
}

void Wire::setValue(int v) {
    value = v;
}

void Wire::setName(char n) {
    name = n;
}

void Wire::setIndex(int i) {
    index = i;
}

void Wire::printHistory() {
    for (int i = 0; i < history.size(); i++) {
        std::cout << history.at(i);
    }
}

Wire::~Wire()
{
    delete this;
}