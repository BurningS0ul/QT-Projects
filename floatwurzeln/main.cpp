#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char method;

    cout << "Choose Method:" << endl;
    cout << "a: cmath" << endl;
    cout << "b: without selectionprimitive and cmath" << endl;
    cout << "c: with selectionprimitive" << endl;
    cout << "d: exit program" << endl;
    cin >> method;

    float num = 0.0;
    float root = 0.0;
    float rootA = 0.0;

    switch (method) {
        case 'a':

            cout << "Geben Sie eine Gleitkommazahl >= 0 ein: ";
            cin >> num;

            root = sqrt(num);

            cout << "Die Quadratwurzel von " << num << " ist " << root << endl;
            break;

        case 'b':

            cout << "Geben Sie eine Gleitkommazahl >= 0 ein: ";
            cin >> num;

            rootA = (1 + (num / 2)) / 2.0;

            cout << "Die Quadratwurzel von " << num << " ist " << rootA << endl;
            break;

        case 'c':

            cout << "Geben Sie eine Gleitkommazahl >= 0 ein: ";
            cin >> num;

            cout << "Die Quadratwurzel von " << num << " ist " << root << endl;
    }
}
