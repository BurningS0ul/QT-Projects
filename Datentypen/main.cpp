#include <iostream>
#include <cmath>

using namespace std;

int main()  //Aufgabe: Fläche und Umfang eines Kreises berechnen T = r2 Π und U = 2r Π
{
    double r = 5.0, y = 3.14;
    int a = 5, b = 3;

    cout << "Flaeche: " << pow(r, 2) * y << " double" << "\t" << pow(a, 2) * b << " int" << endl;
    cout << "Umfang: " <<  (2 * r) * y << " double" << "\t" << (2 * a) * b << " int" << endl;
}
