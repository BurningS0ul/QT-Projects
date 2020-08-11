#include <iostream>

using namespace std;

int main()
{
    struct Koordinatensystem {
        int x;
        int y;
        int pos;
    };

    Koordinatensystem i, j;

    cout << "Input your position.(x)(y)" << endl;

    cin >> i.x;
    cin >> j.y;

    i.pos = i.x;
    j.pos = j.y;

    cout << "Your current position is " << i.pos << " X " << j.pos << " Y" << endl;

    return 0;
}
