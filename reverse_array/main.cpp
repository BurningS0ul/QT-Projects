#include <iostream>

using namespace std;

int main()
{
    float reversal[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (float r : reversal){
        for (r = 10; r > 0; r--){
        cout << r << " ";
        }
        cout << endl;
        break;
    }

    return 0;
}
