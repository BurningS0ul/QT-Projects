#include <iostream>

using namespace std;

void PrintInputMatrix(){    //inputs

    cout << "\n" << "INPUT MATRIX" << endl;
    cout << " 1 | 2 | 3 " << endl;
    cout << " --------- " << endl;
    cout << " 4 | 5 | 6 " << endl;
    cout << " --------- " << endl;
    cout << " 7 | 8 | 9 " << "\n" <<  endl;
}

char board[3][3] {{' ', ' ', ' '},{' ', ' ', ' '},{ ' ', ' ', ' '}};

int turn = 1; //P1 = 1, P2 = 0

char mark = 'O'; // P1 = O, P2 = X

int input;

int addMark(){  //add O or X

//    for(int i = 0; i < 3; i++){  //horizontaler check
//        for(int j = 0; j < 3; j++){ //vertikaler check
//            if(input){
//                if (board[i][j] == ' '){
//                    board[i][j] = mark;
//                    return 1;
//                }
//                else cout << "invalid input." << endl;
//                //getch();
//                return 0;
//            }
//        }
//    }

    int j = (input - 1) % 3;
    int i = (input - 1 - j) / 3;

    if (board[i][j] == ' '){
                        board[i][j] = mark;
                        return 1;
                    }
                    else cout << "invalid input." << endl;
                    //getch();
                    return 0;
                }


int check(){    //check rows
    if(board[0][0] == mark && board[0][1] == mark && board[0][2] == mark){
        return 1;
    }
    if(board[1][0] == mark && board[1][1] == mark && board[1][2] == mark){
        return 1;
    }
    if(board[2][0] == mark && board[2][1] == mark && board[2][2] == mark){
        return 1;
    }
    if(board[0][0] == mark && board[0][1] == mark && board[0][2] == mark){
        return 1;
    }

//check lines
    if(board[0][0] == mark && board[1][0] == mark && board[2][0] == mark){
        return 1;
    }
    if(board[0][1] == mark && board[1][1] == mark && board[2][1] == mark){
        return 1;
    }
    if(board[0][2] == mark && board[1][2] == mark && board[2][2] == mark){
        return 1;
    }

//check diagonals
    if(board[0][0] == mark && board[1][1] == mark && board[2][2] == mark){
        return 1;
    }
    if(board[0][2] == mark && board[1][1] == mark && board[2][0] == mark){
        return 1;
    }
    else return 0;
}

void PrintBoard(){  //Playing Board

    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << " --------- " << endl;
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << " --------- " << endl;
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}



int main()
{
    int won = 0;
    int ValidInput = 0;

    for(int i = 0; i < 9; i++){
        system("cls");

        PrintBoard();

        if(turn){
            cout << "\n" << "Player 1 Turn. (Symbol = O)" << endl;
        }
        else cout << "\n" << "Player 2 Turn. (Symbol = X)" << endl;

        PrintInputMatrix();

        cout << "Enter input from Input Matrix: " << endl;
        cin >> input;

        while(input < 0 || input > 9){  //only inputs allowed are 1 - 9
            cout << "Invalid Input. Try again: " << endl;
            cin >> input;
        }

        if (turn){
            mark = 'O';
        }
        else mark = 'X';

        ValidInput = addMark();

        if(!ValidInput){    //invalid move
            i--;
            continue;
        }

        won = check();

        if(won){
            system("cls");
            PrintBoard();
            if(turn){
                cout << "\n" << "***Player 1 - You won!*** " << endl;
            }
            else cout << "\n" << "***Player 2 - You won!*** " << endl;
            //getch();    //WHY
            break;
        }

        if(i == 8){ //full board, no moves left
            system("cls");
            PrintBoard();
            cout << "\n" << "***IT'S A DRAW***" << endl;
        }

        turn = !turn;   //switch turns
    }
}
