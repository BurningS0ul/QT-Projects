#include <iostream>

using namespace std;

int main()
{
    const int max = 10;
    int n = 0, zahl;
    int A[max] = {0};

    cout << "This is selection sort!\n" << endl;
    //Eingabe
    do {
        cout << "Input your integers (0 to end inputs): ";
        cin >> zahl;
        A[n] = zahl;

        if (zahl != 0) {
            n++;
        }
    }

    while (zahl != 0 && n < max);

    for (int i = 0; i < n - 1; i++) {
        int k = i;
        int min = A[i];

        for (int j = i + 1; j < n; j++) {
            if (A[j] < min) {
                k = j;
                min = A[j];
            }
        }
        A[k] = A[i];
        A[i] = min;
    }

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
        cout << endl;
    }


    return 0;
}
