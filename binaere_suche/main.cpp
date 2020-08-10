#include <iostream>
#include <array>

using namespace std;

int main()
{
    const int n = 10;
    array<int, n> A = {1, 3, 4, 6, 8, 9, 12, 25, 33, 34};

    int key, pos;
    int left = 0, right = n - 1, mid;
    bool found = false;

    cout << "Suche nach: ";
    cin >> key;

    while (left <= right) {
        mid = (left + right) / 2;
        if (key < A[mid]) {
            right = mid - 1;
        }
        else if (key > A[mid]) {
            left = mid + 1;
        }
        else {
            found = true;
            pos = mid;
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
