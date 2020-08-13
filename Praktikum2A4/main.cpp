#include <iostream>

using namespace std;

int main()
{
    float Zinsen, Schuld = 10000, Ann, Til, Rate = 0.07;

    cout << "Tilgungsplan" << endl;
    cout << "Bitte geben Sie die gewuenschte Annuitaet ein: ";
    cin >> Ann;

    for (int i = 0; i < Schuld; i++) {

        Zinsen = Schuld * Rate;
        Til = Ann - Zinsen;
        Schuld = Schuld - Til;

        if (Schuld < 0) {
            break;
        }

        cout << "Jahr: " << i << "\t" << "Zinsen: " << Zinsen << "\t" << "Tilgung: " << Til << " Euro\t" << "Restschuld: " << Schuld << " Euro" << endl;
    }
    return 0;
}
