#include <iostream>
#include <fstream>
//#include "Wire.h"
//#include "Gate.h"

using namespace std;

int main(int argc, char* argv[])
{
    ifstream circuitIn;
    ifstream vectorIn;
    string filename;
    
    do {
        cout << "Please enter the name of the file (base name only) : ";
        cin >> filename;
        circuitIn.open((filename += ".txt").c_str());
        vectorIn.open((filename += "_v.txt").c_str());
    } while(!(circuitIn && vectorIn));

    while(!circuitIn.eof()) {
        //TODO: parse cricuit file.
    }

    while(!vectorIn.eof()) {
        //TODO: parse vector file.
    }

    
}