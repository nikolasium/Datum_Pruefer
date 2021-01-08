// Author Nikolas Beier

// Datum_Pruefer.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Datum.hpp"

using namespace std;

int main()
{
    cout << "Datumspruefer.\n\n";

    /*
    Datum d1(1997, 7, 24);
    Datum d2(2001, 5, 1);
    Datum d3(1997, 8, 31);
    */
    
    Datum d;

    d.eingabe();
    d.ausgabe();

    /*
    d1.ausgabe();
    d2.ausgabe();
    d3.ausgabe();
    */
    
    return 0;
}
