#include <iostream>

using namespace std;

int main() {
    const int Minimum = 3;
    const int Maximum = 27;
    float Wert;

    do {    // Dialog
        cout << "Bitte geben Sie einen Wert im Bereich " << Minimum << ".." << Maximum << " ein: ";
        cin >> Wert;
    }
    while (Wert < Minimum || Wert > Maximum);    // Berechnung mit Wert im gültigen Bereich
        cout << "Wurzel von " << Wert << " ist " << sqrt(Wert) << endl;
}
