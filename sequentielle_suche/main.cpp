#include <iostream>
#include <array>

using namespace std;

int main()
{
    const int n = 10;
    array<int, n> A = {2, 3, 4, 5, 6, 1, 2, 3, 4, 5};

    int key, pos;
    bool found = false;

    cout << "Suche nach: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (key == A[i]) {
            found = true;
            pos = i;
            break;
        }
    }

    if (!found) {
        cout << "Element nicht vorhanden!!" << endl;

    }
    else {
        cout << "Element liegt an Stelle " << pos << endl;
    }

    return 0;
}
