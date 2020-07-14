#include <iostream>

using namespace std;

bool NumCheck (int a, int b, int c){

    if (a > 0){
        cout << a << " is a positive Number." << endl;
    }
    else if (a < 0){
        cout << a << " is a negative Number." << endl;
    }
    else {
        cout << a << " equals Zero." << endl;
    }

    if (b > 0){
        cout << b << " is a positive Number." << endl;
    }
    else if (b < 0){
        cout << b << " is a negative Number." << endl;
    }
    else {
        cout << b << " equals Zero." << endl;
    }

    if (c > 0){
        cout << c << " is a positive Number." << endl;
    }
    else if (c < 0){
        cout << c << " is a negative Number." << endl;
    }
    else {
        cout << c << " equals Zero." << endl;
    }
    return 0;
}

int main()
{
    int a, b, c;

    cout << "Input your 3 numbers: " << endl;
    cin >> a >> b >> c;

    NumCheck(a, b, c);

    return 0;
}
