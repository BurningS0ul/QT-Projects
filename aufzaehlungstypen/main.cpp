#include <iostream>

using namespace std;

int main()
{
    enum Farbe {rot, gelb, gruen};
    enum Wochentag {Sonntag, Montag, Dienstag, Mittwoch, Donnerstag, Freitag, Samstag};
    enum Automarke {Audi, VW, Renault} meinAuto;

    Wochentag heute;

    heute = Montag;
    //heute = 2;
    int i = Samstag;
    i = heute + Montag;
    meinAuto = VW;
    //meinAuto = VW + Audi;

    cout << rot + gelb + gruen << endl;

    //heute = rot;
    return 0;
}
