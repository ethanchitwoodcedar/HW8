#include <iostream>
#include <fstream>
#include "Wire.h"
#include "Gate.h"

using namespace std;

struct WireEvent{
    string wireName;
    short time;
    int value;

};

int main(int argc, char* argv[])
{
    map<WireEvent> Events;
    WireEvent Event;
    ifstream circuitIn;
    ifstream vectorIn;
    string filename;
    string input;
    string circuitName;
    int A;
    int B;
    int C;
    int D;
    
    do {
        cout << "Please enter the name of the file (base name only) : ";
        cin >> filename;
        circuitIn.open((filename += ".txt").c_str());
        vectorIn.open((filename += "_v.txt").c_str());
    } while(!(circuitIn && vectorIn));

    circuitIn >> input;
    circuitIn >> circuitName;

    while(!circuitIn.eof()) {
        //TODO: parse cricuit file.
        circuitIn >> input;
        if("INPUT" == input) {
            circuitIn >> input;
            circuitIn >> A;

        }
        else if("OUTPUT" == input) {
            circuitIn >> input;
            circuitIn >> A;
        }
        else if("AND" == input) {
            circuitIn >> input;
            circuitIn >> A;

        }
        else if ("OR" == input) {

        }
        else if ("XOR" == input) {

        }
        else if ("NAND" == input) {

        }
        else if ("NOR" == input) {

        }
        else if ("XNOR" == input) {

        }
        else if ("NOT" == input) {

        }
    }

    vectorIn >> input;
    vectorIn >> input;


    while(!vectorIn.eof()) {
        //TODO: parse vector file.
        vectorIn >> input;
        vectorIn >> Event.wireName;

    }

    
}