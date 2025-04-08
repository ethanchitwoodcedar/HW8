#include "Wire.h"
#include "Gate.h"

Wire::Wire(int v = -1, std::string n = "new", int i = 0) {
    value = v;
    name = n;
    index = i;
}

int Wire::getValue() {
    return value;
}

std::string Wire::getName() {
    return name;
}

int Wire::getIndex() {
    return index;
}

void Wire::setValue(int v) {
    /* Automatically enters value in the history vector. */
    history.push_back(value);
    value = v;
}

void Wire::setName(std::string n) {
    name = n;
}

void Wire::setIndex(int i) {
    index = i;
}

void Wire::printHistory() {
    /* Currently implemented for a console application. */
    for (int i = 0; i < history.size(); i++) {
        std::cout << history.at(i);
    }
}

void Wire::addDrive(Gate* gate) {
    drives.push_back(gate);
}

std::vector<Gate*> getDrives() {
    return drives;
}

Wire::~Wire()
{
    delete this;
}