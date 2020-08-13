#include <iostream>
#include <string>

using namespace std;

int main()
{
    enum Monat {Jan = 1, Feb, Mrz, Apr, Mai, Jun, Jul, Aug, Sep, Okt, Nov, Dez};

    struct Datum {
        int tag;
        Monat mon;
        int jahr;
    };
    Datum DA;

    enum Art {m, w};

    struct Person {
        string vorname, name;
        Art geschlecht;
        Datum geburtsdatum;
    };
    Person PE;

    const int max = 42;
    Person schulklasse[max];

    string i;
    DA.tag = 30;
    DA.mon = Jan;
    DA.jahr = 2020;

    PE.vorname = "Alex";
    PE.name = "Muster";
    PE.geschlecht = m;

    cout << "Was ist das Geburtsdatum eines Schuelers? FORMAT: 01.Jan.2000" << endl;

    cin >> DA.tag;
    cin >> i;
    cin >> DA.jahr;

    if (i == "Jan") {
        DA.mon = Jan;
    }
    else if (i == "Feb") {
        DA.mon = Feb;
    }
    else if (i == "Mrz") {
        DA.mon = Mrz;
    }
    else if (i == "Apr") {
        DA.mon = Apr;
    }
    else if (i == "Mai") {
        DA.mon = Mai;
    }
    else if (i == "Jun") {
        DA.mon = Jun;
    }
    else if (i == "Jul") {
        DA.mon = Jul;
    }
    else if (i == "Aug") {
        DA.mon = Aug;
    }
    else if (i == "Sep") {
        DA.mon = Sep;
    }
    else if (i == "Okt") {
        DA.mon = Okt;
    }
    else if (i == "Nov") {
        DA.mon = Nov;
    }
    else if (i == "Dez") {
        DA.mon = Dez;
    }


    cout << "Geburtstag am: " << DA.tag << "." << DA.mon << "." << DA.jahr << endl;

    return 0;
}
