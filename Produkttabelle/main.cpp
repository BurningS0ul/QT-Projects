#include <iostream>

using namespace std;

int main()
{
    int counter, x;

    cout << "Dies ist eine Tabelle, die das Ergebnis des Produkts von 2 ganzen zahlen darstellt." << "\n" << endl;

    cout << endl;
    cout << " " << "\t";
    for (counter = 1; counter <= 5; counter++){
        for (x = 1; x <= 5; x++){
        cout << x * counter << "\t";
            if (x == 5){
            cout << endl;
            cout << counter << "\t";
            }
        }
    }
    cout << endl;

    return 0;
}
