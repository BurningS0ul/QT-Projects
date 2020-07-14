#include <iostream>

using namespace std;

int main()
{
    char input = 'a';
//    int input;

    cout << "Willkommen im Aufgabenmenu. Waehlen sie von diesen optionen eine aus: \n" << endl;
    cout << "(a) Hello World!" << endl;
    cout << "(b) Matrikelnummer eingeben." << endl;
    cout << "(c) End Program.\n" << endl;
    cin >> input;

    if (input > 'c'){
        cout << "There is no option " << input << endl;
    }

    switch (input){

    case 'a':
        cout << "Hello World!" << endl;
        break;

    case 'b':
        cout << "Bitte Matrikelnummer eingeben: " << endl;
        cin >> input;
        cout << "Danke fuer Ihre Eingabe." << endl;

    case 'c':
        return 0;
    }

    return 0;
}
