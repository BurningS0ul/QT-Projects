#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> numbers(3);

    cout << "Input your values." << endl;
    int value;

    do{
        cout << "Value ( 0 = End inputs): ";
        cin >> value;

        if (value != 0){
            numbers.push_back(value);
        }
    }
    while ( value != 0);
        cout << "Array: \n";

        for ( int i = 0; i < numbers.size(); i++){
            cout << i << ". Value: " << numbers[i] << endl;
        }

    return 0;
}
