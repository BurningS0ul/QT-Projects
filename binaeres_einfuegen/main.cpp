#include <iostream>

using namespace std;

int main()
{
    const int max = 10;
    int n = 0;
    int A[max] = {0};

    do {
        int key;
        cout << "Integer (0 Abbruch): ";
        cin >> key; // Eingabe neuer Werte

        if (key == 0) {
            break;
        }
        // Binäre Suche zum Finden der Einfügestelle
        int left = 0;
        int right = n - 1;

        while (left <= right) {
            int mid = (left + right) / 2;
            if (key < A[mid]) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        // Einfügestelle ist: A[left] ...
        int j = n - 1; // beginne ganz rechts

        while (j >= left) { // verschieben größerer Elemente
            A[j + 1] = A[j];
            j--;
        }

        A[left] = key; // einfügen an richtiger Stelle
        n++; // Anzahl der Elemente erhöhen
    }
    while (n < max); // Ende do-while

    for (int i = 0; i < n; i++) { // Ausgabe
        cout << i << ": " << A[i] << endl;
    }
}

