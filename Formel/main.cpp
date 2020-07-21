#include <iostream>

using namespace std;

int main()
{
    float x, y, a;

    cout << "The formula is x + y / a + (1 / x)." << endl;
    cout << "Input your X." << endl;
    cin >> x;

    cout << "Input your Y." << endl;
    cin >> y;

    cout << "Input your A." << endl;
    cin >> a;

    cout << "Your result is " << x + y / (a +(1 / x)) << endl;


    return 0;
}
