#include <iostream>

using namespace std;

wstring tetromino[7];   //wstring?

int nFieldWidth = 12;
int nFieldHeight = 18;
unsigned char* pfield = nullptr;    //WHAT? dynamic allocation?

int Rotate (int px, int py, int r) {

    switch (r % 4) {
        case 0:
            return py * 4 + px;         //0 degrees
        case 1:
            return 12 + py - (px * 4);  //90 degrees
        case 2:
            return 15 - (py * 4) - px;  //180 degrees
        case 3:
            return 3 - py + (px * 4);   //270 degrees
    }
    return 0;
}

int main()
{
    //create assets
    tetromino[0].append(L"..X.");   //append?, . for empty space, X for shape
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");   //long piece

    tetromino[1].append(L"..X.");
    tetromino[1].append(L".XX.");
    tetromino[1].append(L".X..");
    tetromino[1].append(L"....");   //Z piece

    tetromino[2].append(L".X..");
    tetromino[2].append(L".XX.");
    tetromino[2].append(L"..X.");
    tetromino[2].append(L"....");   //inverted Z piece

    tetromino[3].append(L"....");
    tetromino[3].append(L".XX.");
    tetromino[3].append(L".XX.");
    tetromino[3].append(L"....");   //block piece

    tetromino[4].append(L"..X.");
    tetromino[4].append(L".XX.");
    tetromino[4].append(L"..X.");
    tetromino[4].append(L"....");   //T piece

    tetromino[5].append(L"....");
    tetromino[5].append(L".XX.");
    tetromino[5].append(L"..X.");
    tetromino[5].append(L"..X.");   //L piece

    tetromino[6].append(L"....");
    tetromino[6].append(L".XX.");
    tetromino[6].append(L".X..");
    tetromino[6].append(L".X..");   //inverted L piece



    return 0;

}
