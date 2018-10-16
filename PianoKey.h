// Transposer
// PianoKey.h
// Jordan Pounds

#include <iostream>
using namespace std;

#ifndef PianoKey_h
#define PianoKey_h

class PianoKey // Originally alto sax - becoming piano.
{
public:
    string instrument;
    string P = "P", p = "p", S = "S", s = "s";
    string Exit = "Exit", exit = "exit", EXIT = "EXIT";
    string note;
    string A = "A", a = "a", Ab = "Ab", ab = "ab", B = "B", b = "b", Bb = "Bb", bb = "bb";
    string C = "C", c = "c", D = "D", d = "d", Db = "Db", db = "db", E = "E", e = "e";
    string Eb = "Eb", eb = "eb", F = "F", f = "f", G = "G", g = "g", Gb = "Gb", gb = "gb";
    int x = 0;

public:
    int altoToPiano()
    {
        
        // Exit
        
        while (note != Exit || note != exit || note != EXIT)
        {
        while (note == Exit || note == exit || note == EXIT)
        {
            return 0;
        }
            cin >> note;
        
        // Increment
            
        if (note == A || note == a  || note == Ab || note == ab || note == B  || note == b
                      || note == Bb || note == bb || note == C  || note == c  || note == D
                      || note == d  || note == Db || note == db || note == E  || note == e
                      || note == Eb || note == eb || note == F  || note == f  || note == G
                      || note == g  || note == Gb || note == gb)
            {
                ++x;
            }
            
        // Notes
        
        if (note == A || note == a)
        {
            cout << x << ". " << "C" << endl;
        }
        else if (note == Ab || note == ab)
        {
            cout << x << ". " << "B" << endl;
        }
        else if (note == B || note == b)
        {
            cout << x << ". " << "D" << endl;
        }
        else if (note == Bb || note == bb)
        {
            cout << x << ". " << "Db" << endl;
        }
        else if (note == C || note == c)
        {
            cout << x << ". " << "A" << endl;
        }
        else if (note == D || note == d)
        {
            cout << x << ". " << "F" << endl;
        }
        else if (note == Db || note == db)
        {
            cout << x << ". " << "E" << endl;
        }
        else if (note == E || note == e)
        {
            cout << x << ". " << "G" << endl;
        }
        else if (note == Eb || note == eb)
        {
            cout << x << ". " << "Gb" << endl;
        }
        else if (note == F || note == f)
        {
            cout << x << ". " << "Ab" << endl;
        }
        else if (note == G || note == g)
        {
            cout << x << ". " << "Bb" << endl;
        }
        else if (note == Gb || note == gb)
        {
            cout << x << ". " << "A" << endl;
        }
        else if (!(note == Exit || note == exit || note == EXIT))
        {
            cout << "Please enter a valid note." << endl;
        }
        }
        return 0;
    }
};
    
#endif
