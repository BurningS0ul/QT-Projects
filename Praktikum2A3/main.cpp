#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;

int main()
{
    string x;
    char c;
    int i = 0;
    cout << "Geben Sie nur Kleinbuchstaben ein! Abbruch: 0 Eingeben" << endl;
    getline(cin, x);

    if (x == "0") {
        return 0;
    }

    cout << "Ihre Buchstaben in Gross: ";

    while (x[i]) {
        c = x[i];
        if (islower(c)) {
            c = toupper(c);
            putchar(c);
            i++;
        }
        else {
            cout << "Try Again." << endl;
            break;
        }
    }
    cout << endl;

    return 0;
}
