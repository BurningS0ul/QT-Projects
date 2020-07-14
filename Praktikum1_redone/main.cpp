#include <iostream>

using namespace std;

int main(void) {

    int length, volume, surface, square;

    cout << "Geben Sie eine ganze positive Zahl ein!" << endl;
    cin >> length;

    square = length * length;
    surface = 6 * square;
    volume = square * length;

    cout << "Oberflaeche: " << surface << endl;
    cout << "Volumen: " << volume << endl;

    return 0;
}
