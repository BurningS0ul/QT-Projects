#include <iostream>

using namespace std;

int main()
{
   int x = 30; int y = 20; int z = 10;

//   if(x == 0){
//       y = x;
//       z = y;
//   }

   if(x == 0)
       y = x;
       z = y;

   cout << z << endl;
   cout << x << endl;
   cout << y << endl;
   return 0;
}
