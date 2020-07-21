#include <iostream>

using namespace std;

int main()
{
    int r;
    double p, T, U;
    cout << "What is the radius of your circle? " << endl;
    cin >> r;

    p = 3.14;

    T = pow(r, 2) * p;
    U = 2 * r * p;

    cout << "Your surface is " << T << "." << endl;
    cout << "Your circumference is " << U << "." << endl;
    return 0;
}
