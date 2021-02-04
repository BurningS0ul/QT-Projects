#include <iostream>
#include <ctime>
#include <Units.h>

using namespace std;

int main() {

    Warrior W;
    Archer A;
    Mage M;
    Rogue R;

    srand(time(NULL));

    int startW;
    int startA;
    int startM;
    int startR;

    int numW;
    int numA;
    int numM;
    int numR;

    char turn = 'W';
    int miss = 0;

    cout << "*** WarSim! *** \n";
    cout << "A War between Warriors, Archers, Mages and Rogues.\n\n";

    //get number warriors
    cout << "Enter the number of Warriors: ";
    cin >> numW;
    startW = numW;

    //get number archers
    cout << "Enter the number of Archers: ";
    cin >> numA;
    startA = numA;

    //get number mages
    cout << "Enter the number of Mages: ";
    cin >> numM;
    startM = numM;

    //get number rogues
    cout << "Enter the number of Rogues: ";
    cin >> numR;
    startR = numR;

    cout << "\nBegin Combat!\n\n";

    while ((numW > 0) || (numA > 0) || (numM > 0) || (numR > 0)) {

        float attack = static_cast<float> (rand() % 4);
        float attackresult;

        attackresult = attack;

        if (attack == 0.0) {
            miss++;
        }

        if (turn == 'W' && numW > 0) {
            //check if attack was successful
            if (attackresult == W.Attack) {
                A.currentHealth -= W.Damage;
                M.currentHealth -= W.Damage;
                R.currentHealth -= W.Damage;

                if (A.currentHealth < 0 && numA != 0) {
                    numA--;
                    A.currentHealth = A.Health;
                }

                if (M.currentHealth < 0 && numM != 0) {
                    numM--;
                    M.currentHealth = M.Health;
                }
                if (R.currentHealth < 0 && numR != 0) {
                    numR--;
                    R.currentHealth = R.Health;
                }
            }
        }
        turn = 'A';

        if (turn == 'A' && numA > 0) {

            if (attackresult == A.Attack) {
                W.currentHealth -= A.Damage;
                M.currentHealth -= A.Damage;
                R.currentHealth -= A.Damage;

                if ( W.currentHealth < 0 && numW != 0) {
                    numW--;
                    W.currentHealth = W.Health;
                }
                if (M.currentHealth < 0 && numM != 0) {
                    numM--;
                    M.currentHealth = M.Health;
                }
                if (R.currentHealth < 0 && numR != 0) {
                    numR--;
                    R.currentHealth = R.Health;
                }
            }
        }
        turn = 'M';

        if (turn == 'M' && numM > 0) {

            if (attackresult == M.Attack) {
                W.currentHealth -= M.Damage;
                A.currentHealth -= M.Damage;
                R.currentHealth -= M.Damage;

                if ( W.currentHealth < 0 && numW != 0) {
                    numW--;
                    W.currentHealth = W.Health;
                }
                if (A.currentHealth < 0 && numA != 0) {
                    numA--;
                    A.currentHealth = A.Health;
                }
                if (R.currentHealth < 0 && numR != 0) {
                    numR--;
                    R.currentHealth = R.Health;
                }
            }
        }
        turn = 'R';

        if (turn == 'R' && numR > 0) {

            if (attackresult == R.Attack) {
                W.currentHealth -= R.Damage;
                A.currentHealth -= R.Damage;
                M.currentHealth -= R.Damage;

                if (W.currentHealth < 0 && numW != 0) {
                    numW--;
                    W.currentHealth = W.Health;
                }
                if (A.currentHealth < 0 && numA != 0) {
                    numA--;
                    A.currentHealth = A.Health;
                }
                if (M.currentHealth < 0 && numM != 0) {
                    numM--;
                    M.currentHealth = M.Health;
                }
            }
        }
        turn = 'W';

        if (numW > 0 && numA <= 0 && numM <= 0 && numR <= 0) {
            cout << "The Warriors are victorious!\n";
            cout << "Warriors left: " << numW << endl;
            break;
        }
        if (numA > 0 && numW <= 0 && numM <= 0 && numR <= 0) {
            cout << "The Archers annihilated everyone!\n";
            cout << "Archers left: " << numA << endl;
            break;
        }
        if (numM > 0 && numA <= 0 && numW <= 0 && numR <= 0) {
            cout << "Nobody could keep up with the Mages!\n";
            cout << "Mages left: " << numM << endl;
            break;
        }
        if (numR > 0 && numA <= 0 && numM <= 0 && numW <= 0) {
            cout << "The Rogues sneaked their way to victory!\n";
            cout << "Rogues left: " << numR << endl;
            break;
        }
        if (numW == 0 && numA == 0 && numM == 0 && numR == 0) {
            cout << "It's a draw!\n\n";
            break;
        }
    }
    cout << "\nThe battle is over!\n\n";
    cout << "Missed Attacks: " << miss << "\n" << endl;

    //results
    cout << "Warriors lost: " << startW - numW << endl;
    cout << "Archers lost: " << startA - numA << endl;
    cout << "Mages lost: " << startM - numM << endl;
    cout << "Rogues lost: " << startR - numR << "\n" << endl;

    return 0;
}
