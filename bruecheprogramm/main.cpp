#include <iostream>

using namespace std;

int main()
{
    struct bruch { // Typ-Deklaration
        int zaehler;
        int nenner;
    };
    bruch a, b, mul, sum; // Definition von Variablen

    a.zaehler = 2;
    a.nenner = 3; // Initialisierung per Selektion
    b = {2, 3}; // Uniforme Initialisierung

    sum.zaehler = a.zaehler * b.nenner + a.nenner * b.zaehler;
    sum.nenner = a.nenner * b.nenner;
    mul.zaehler = a.zaehler * b.zaehler;
    mul.nenner = a.nenner * b.nenner;

    cout << "a+b = " << sum.zaehler << "/" << sum.nenner << endl;
    cout << "a*b = " << mul.zaehler << "/" << mul.nenner << endl;

    sum.zaehler = sum.zaehler / 4;
    sum.nenner = sum.nenner / 3;
    mul.zaehler = mul.zaehler / 2;
    mul.nenner = mul.nenner / 3;

    cout << "Bruchkuerzung: a+b= " << sum.zaehler << "/" << sum.nenner << endl;
    cout << "Bruchkuerzung: a*b = " << mul.zaehler << "/" << mul.nenner << endl;
    return 0;
}
