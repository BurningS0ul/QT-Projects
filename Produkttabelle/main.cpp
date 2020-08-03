#include <iostream>

using namespace std;

int main()
{
    int counter, x;

    cout << "Dies ist eine Tabelle, die das Ergebnis des Produkts von 2 ganzen zahlen darstellt." << "\n" << endl;

    cout << endl;
    cout << "1\t2\t3\t4\t5" << endl;
    for (counter = 1; counter <= 5; counter++){
        for (x = 1; x <= 5; x++){
        cout << x * counter << "\t";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
