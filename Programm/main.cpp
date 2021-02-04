#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nick { "no nickname" };
    string real { "no realname" };

    int yob { 0 };
    int mob { 0 };
    int year {2020};
    int TotalMonths {12};


    cout << "Nickname, echten Namen, Geburtsmonat und Geburtsjahr eingeben: ";
    cin >> nick >> real >> mob >> yob;

    double age = year - yob;
    double month = TotalMonths - mob;

    cout << "\n\t" << "nick: " << nick;
    cout << "\n\t" << "real: " << real;
    cout << "\n\t" << "yob: " << yob;
    cout << "\n\t" << "age: " << age << ", " << month << "\n";


}
