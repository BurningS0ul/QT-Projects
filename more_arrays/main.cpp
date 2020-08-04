#include <iostream>
#include <array>

using namespace std;

int main()
{
    array <int, 5> C = {0, 1, 2, 3};

    for (int s : C){
        cout << s << ' ';
    }
    cout << endl;
    return 0;
}
