#include <iostream>

using namespace std;

int main()
{
    int num, sum = 0, repeat = 0;
    cout << "Enter 10 numbers." << endl;

    while (repeat < 10){
        cin >> num;
        repeat += 1;
        sum = num + sum;

        if (num == 0){
            break;
        }

        if (repeat < 10){
            continue;
        }

        else{
            break;
        }
    }

    cout << "Your sum is: " << sum << endl;

    return 0;
}
