#include <iostream>
#include <fstream>
#include "Wire.h"
#include "Gate.h"

using namespace std;

int main(int argc, char* argv[])
{
    ifstream circuitIn;
    ifstream vectorIn;
    string filename;
    string input;
    string circuitName;
    
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
            
        }
        else if("OUTPUT" == input) {

        }
        else if("AND" == input) {
        
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
    }

    while(!vectorIn.eof()) {
        //TODO: parse vector file.
    }

    
}