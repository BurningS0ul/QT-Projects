#include <iostream>

using namespace std;

int main() {

    int eingabe = 0;
    int summe = 0;

       while (summe < 15) {
            cout << "Integer: ";
            cin >> eingabe;
            summe = eingabe+summe;

            if(eingabe == 0){
                return 0;
            }
       }
    cout <<"Summe: " << summe << endl;
}
