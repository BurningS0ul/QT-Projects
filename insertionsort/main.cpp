#include <iostream>

using namespace std;

int main()
{
    const int max = 10;
    int n = 0, zahl;
    int A[max] = {0};

    cout << "This is insertion sort!\n" << endl;
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
        int tmp = A[i];
        int j = i - 1;
        //verschieben größerer Elemente
        while (j >= 0 && tmp < A[j]) {
            A[j + 1] = A[j];
            j--;
        }
        //einfügen an richtiger Stelle
        A[j + 1] = tmp;
    }

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
        cout << endl;
    }


    return 0;
}
