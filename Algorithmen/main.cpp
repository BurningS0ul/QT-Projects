#include <iostream>

using namespace std;

int main()
{
    char response;
    cout << "Sie moechten jemanden anrufen. Kennen sie die nummer?" << endl;
    cin >> response;

    if(response == 'y'){
        cout << "Sie nehmen den Hoerer ab und waehlen die nummer.\n Ist sie besetzt?" << endl;
        cin >> response;

        if(response == 'n'){
            cout << "Sie hatten ein tolles Gespraech und legen nun auf." << endl;
        }
        if(response == 'y'){
            cout << "Sie legen auf und probieren es spaeter noch ein mal." << endl;
        }
        return 0;
    }

    if(response == 'n'){
        cout << "Sie suchen die Nummer aus dem Telefonbuch.\n Gefunden?" << endl;
        cin >> response;

        if(response == 'y'){
            cout << "Sie nehmen den Hoerer ab und waehlen die nummer.\n Ist sie besetzt?" << endl;
            cin >> response;

            if(response == 'n'){
                cout << "Sie hatten ein tolles Gespraech und legen nun auf." << endl;
                return 0;
            }

            if(response == 'y'){
                cout << "Sie legen auf und probieren es spaeter noch ein mal." << endl;
            }
        }
    }

    if(response == 'n'){
        cout << "Sie konnten die Nummer nicht finden, also koennen Sie auch nicht anrufen." << endl;
    }

    return 0;
}
