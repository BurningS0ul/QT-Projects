#include <iostream>

using namespace std;

int main()
{
    int counter;

    cout << "Dies ist eine Tabelle, die das Ergebnis des Produkts von 2 ganzen zahlen darstellt." << "\n" << endl;

    cout << " " << "\t";
    for (counter = 1; counter <= 5; counter++){
        cout << counter << "\t";
    }
    cout << endl;

    cout << "1" << "\t";
    for (counter = 1; counter <= 5; counter++){
        cout << 1 * counter << "\t";
    }
    cout << endl;

    cout << "2" << "\t";
    for (counter = 1; counter <= 5; counter++){
        cout << 2 * counter << "\t";
    }
    cout << endl;

    cout << "3" << "\t";
    for (counter = 1; counter <= 5; counter++){
        cout << 3 * counter << "\t";
    }
    cout << endl;

    cout << "4" << "\t";
    for (counter = 1; counter <= 5; counter++){
        cout << 4 * counter << "\t";
    }
    cout << endl;

    cout << "5" << "\t";
    for (counter = 1; counter <= 5; counter++){
        cout << 5 * counter << "\t";
    }
    cout << "\n" << endl;
    return 0;
}
