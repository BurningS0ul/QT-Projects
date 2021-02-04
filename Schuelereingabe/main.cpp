#include <iostream>

using namespace std;

int main()
{
    enum Monat {Jan, Feb, Mrz, Apr,
                Mai, Jun, Jul, Aug,
                Sep, Okt, Nov, Dez
               };

    struct Datum {
        int tag;
        Monat mon;
        int jahr;
    };

    enum Art {m, w};

    struct Person {
        string vorname, name;
        Art geschlecht;
        Datum geburtsdatum;
    };

    const int max = 42;

    Person schulklasse[max];
}
