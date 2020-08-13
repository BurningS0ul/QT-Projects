#include <iostream>

using namespace std;

int main()
{
    int x, i = 0, a = 2, mal;
    cout << "Geben Sie eine Zahl an und ich errechne die Primzahlzerlegung!" <<
         endl;
    cin >> x;

    while (i != 1) {
        while (x % a != 0) {
            a++;
            mal = 1;
        }
        while (x % a == 0) {
            x = x / a;
            mal++;
            cout << a;
            if (x > 1) {
                cout << "*";
            }
        }
        if (x < a) {
            i = 1;
        }
        else {
            i = 0;
        }
    }
    cout << endl;

    return 0;
}
