// Transposer
// Jordan Pounds
/*
Using if else and while statements, alto saxophone notes
are transposed into piano notes and vice versa.
*/

#include <iostream>
#include "InstrumentSelection.h"
#include "PianoKey.h"
#include "AltoSaxKey.h"

using namespace std;

int main()
{
    string instrument;
    string P = "P", p = "p", S = "S", s = "s";
    string Exit = "Exit", exit = "exit", EXIT = "EXIT";
    
    PianoKey pK;
    AltoSaxKey asK;
    InstrumentSelection iS;
    
    if (iS.getInstrument() == instrument)
    {
        if (instrument == Exit || instrument == exit || instrument == EXIT)
        {
            return 0;
        }
    }
    
    while (iS.instrument == P || iS.instrument == p)
    {
        pK.altoToPiano();
        if (pK.altoToPiano() == 0)
        {
            return 0;
        }
    }
     
    while (iS.instrument == S || iS.instrument == s)
    {
        asK.pianoToAlto();
        if (asK.pianoToAlto() == 0)
        {
            return 0;
        }
    }
    
    return 0;
}
