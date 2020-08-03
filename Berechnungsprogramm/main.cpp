#include <iostream>

using namespace std;

int main()              //Aufgabe: Wie lässt sich die Berechnung erheblich schneller durchführen?
{
//    const int untereGrenze = 1;
//    const int obereGrenze = 9;
//    int i = untereGrenze;

//    while (i <= obereGrenze) { // für alle Zahlen im Bereich
//        int fak = 1;
//        int j = 1;
//        while (j <= i) { // berechne Fakultät von i
//            fak = fak*j;
//            j++;
//        }

//    // Ausgabe Fakultät von i
//    cout << "fak(" << i << ") = " << fak << endl;

//    i++; // nächste Zahl im Bereich
//    }

    int i, fak = 1, j = 1;

    for (i = 1; i <= 9; i++){
        fak = fak * j;
        j++;
        cout << "fak(" << i << ") = " << fak << endl;
    }

    return 0;
}
