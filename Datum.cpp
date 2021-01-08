
#include <iostream>
#include <iomanip>
#include "Datum.hpp"

using namespace std;

Datum::Datum() 
{
    tag = -1;
    monat = -1;
    jahr = 1;
}

Datum::Datum(int j, int m, int t) {

    pruefeTag(t);
    pruefeMonat(m);
    pruefeJahr(j);

    tag = t;
    monat = m;
    jahr = j;

}


void
Datum::pruefeTag(int t) 
{
    if (t < 1 || t > 31) 
    {
        cerr << "Tag muss zwischen 1 und 31 liegen!\n";
    }
}


void
Datum::pruefeMonat(int m) 
{
    if (m < 1 || m > 12) 
    {
        cerr << "Monat muss zwischen 1 und 12 liegen!\n";
    }
}


void
Datum::pruefeJahr(int j) 
{
    if (j < 1) 
    {
        cerr << "Jahr darf nicht kleiner als 1 sein!\n";
    }
}


void
Datum::eingabe() 
{
    int t;
    cout << "Bitte geben Sie den Tag ein: \n";
    cin >> t;
    pruefeTag(t);

    int m;
    cout << "Bitte geben Sie den Monat ein: \n";
    cin >> m;
    pruefeMonat(m);

    int j;
    cout << "Bitte geben Sie das Jahr ein: \n";
    cin >> j;
    pruefeJahr(j);

    tag = t;
    monat = m;
    jahr = j;
}


void
Datum::ausgabe() const 
{
    if (tag < 1 || tag > 31 || monat < 1 || monat > 12 || jahr < 1 || tag == -1)
    {
        cout << "<ungueltiges Datum>" << endl;
        cout << monat << "." << tag << "." << jahr << endl;
    }
    else 
    {
        cout << "Syntax i.O fuer Datum: " << monat << ". " << tag << ". " << jahr << endl;
    }
}