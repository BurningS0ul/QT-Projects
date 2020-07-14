#include <iostream>

using namespace std;

int main()
{
    int num = 1, value, i, sum;
       i = 0; // initialization

       do {
          value = num * i;
          sum = value * 2;
          cout << value << sum << endl;
          i++;

       }
       while ( i <= 5 ); // condition check for exit

       return 0;
}
