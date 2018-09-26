// Transposer
// InstrumentSelection.h
// Jordan Pounds

#include <iostream>
using namespace std;

#ifndef InstrumentSelection_h
#define InstrumentSelection_h

class InstrumentSelection
{
public:
    string instrument;
    string P = "P", p = "p", S = "S", s = "s";
    string Exit = "Exit", exit = "exit";
    
public:
    string getInstrument()
    {
        cout << "Press P to convert Alto Saxophone notes to Piano notes." << endl;
        cout << "Press S to convert Piano notes to Alto Saxophone notes." << endl;
        cout << "Enter the word \"exit\" at any time to terminate the program." << endl;
        cin >> instrument;
        
        // Instrument Selection
        
        while (!(instrument == P || instrument == p || instrument == S || instrument == s))
        {
            while (instrument == Exit || instrument == exit)
            {
                return instrument; // Exit
            }
            cout << "Please enter a valid instrument." << endl;
            cin >> instrument;
        }
        
        if (instrument == P || instrument == p || instrument == S || instrument == s)
        {
            cout << "Press the Enter key once you have provided a musical note." << endl;
        }
        return instrument;
    }
};

#endif
