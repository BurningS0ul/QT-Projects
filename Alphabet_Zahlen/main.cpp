#include <iostream>

using namespace std;

int main()
{
    int a;
    char c;

    cout << "Input a Letter and I will tell you it's corresponding number!" << endl;
    cin >> c;

    switch(c){
        case 'A':
            a = 1;
            break;
        case 'B':
            a = 2;
            break;
        case 'C':
            a = 3;
            break;
        case 'D':
            a = 3;
            break;
        case 'E':
            a = 4;
            break;
        case 'F':
            a = 5;
            break;
        case 'G':
            a = 6;
            break;
        case 'H':
            a = 7;
            break;
        case 'I':
            a = 8;
            break;
        case 'J':
            a = 9;
            break;
        case 'K':
            a = 10;
            break;
        case 'L':
            a = 11;
            break;
        case 'M':
            a = 12;
            break;
        case 'N':
            a = 13;
            break;
        case 'O':
            a = 14;
            break;
        case 'P':
            a = 15;
            break;
        case 'Q':
            a = 16;
            break;
        case 'R':
            a = 17;
            break;
        case 'S':
            a = 18;
            break;
        case 'T':
            a = 19;
            break;
        case 'U':
            a = 20;
            break;
        case 'V':
            a = 21;
            break;
        case 'W':
            a = 22;
            break;
        case 'X':
            a = 23;
            break;
        case 'Y':
            a = 24;
            break;
        case 'Z':
            a = 25;
            break;
        default :
            a = 0;
            break;
    }

    if(a > 0){
        cout << a << endl;
    }
    else{
        cout << "Please input a letter from the Alphabet." << endl;
    }

    return 0;
}
