#include <iostream>

using namespace std;

int main()
{
    int Radius[] = {0, 1, 2, 3, 4};
    int Umfang, x;

    cout << "Input a number between 0 and 4!" << endl;
    cin >> x;

    Umfang = Radius[x] * 2 * 3.14;

    cout << "Der Umfang des Kreises mit dem Radius von " << Radius[x] << " ist " << Umfang << endl;

    return 0;
}
