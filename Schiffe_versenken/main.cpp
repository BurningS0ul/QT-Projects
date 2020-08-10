#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    enum Zustand {
        leer,
        belegt,
        getroffen,
        nichtgetroffen
    };

    //    enum Schiffe {
    //        UBoot,
    //        Zerstorer,
    //        Kreuzer,
    //        Schlachtschiff
    //    };


    int Feld[10][10];

    //    Schiffe meinSchiff;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            Zustand meinZustand = Zustand(rand() % 4);
            Feld[i][j] = meinZustand;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << "   |   ";
        for (int j = 0; j < 10; j++) {
            cout << "   |   ";
        }
        cout << endl;
    }

    return 0;
}
