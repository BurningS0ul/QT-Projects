#include <iostream>

using namespace std;

int main()
{
    const int max = 10;
    int n = 0, zahl;
    int A[max] = {0};

    cout << "This is a bubblesort!\n" << endl;
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
    //Durchläufe
    for (int i = 1; i < n; i++) {
        for ( int j = n - 1; j >= i; j--) {
            if (A[j - 1] > A[j]) {
                int tmp = A[j - 1];
                A[j - 1] = A[j];
                A[j] = tmp;
            }
        }
    }
    //Ausgabe
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
        cout << endl;
    }

    return 0;
}
