#include <iostream>

using namespace std;

int main()
{
    int numA, numB;

    cout << "Geben Sie 2 nummern ein und ich sage, was dazwischen liegt" << endl;
    cin >> numA;
    cin >> numB;

    while (numA < numB) {
        cout << numA << " ";
        numA++;
        if (numA == numB) {
            cout << numB;
        }
    }
    cout << endl;
    if (numB < numA) {
        while (numB < numA) {
            cout << numB << " ";
            numB++;
            if (numB == numA) {
                cout << numA;
            }
        }
        cout << endl;
    }

    return 0;
}
