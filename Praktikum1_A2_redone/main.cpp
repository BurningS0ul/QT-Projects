#include <iostream>

using namespace std;

int main()
{
    double sum, product, mid, numA, numB, numC;

    cout << "Geben sie ihre erste Zahl ein!" << endl;
    cin >> numA;

    cout << "Geben sie ihre zweite Zahl ein!" << endl;
    cin >> numB;

    cout << "Geben sie ihre dritte Zahl ein!" << endl;
    cin >> numC;

    sum = numA + numB + numC;
    product = numA * numB * numC;
    mid = sum / 2;

    cout << "Ihre Summe ist: " << sum << endl;
    cout << "Ihr Produkt ist: " << product << endl;
    cout << "Ihr Mittelwert ist: " << mid << endl;

    return 0;
}
