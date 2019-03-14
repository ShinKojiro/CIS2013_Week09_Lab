#include <iostream>
#include <string>
#include "Board.cpp"

using namespace std;
Board minesweep;
void updateBoard(int& x, int& y){
    minesweep.spaces[x][y] = '+';
    minesweep.print();
}

// void gotKilled(bool& dead){
//     cout << "BANG! U B DED!";

// }

void chooseSpace(int& x, int& y, bool& dead){
    cout << endl << "Choose a space that is hopefully not a bomb (1-8)(x y)" << endl << "(BTW, choose any other number or a letter and you blow up instantly!): ";
        cin >> x >> y;
        x--;
        y--;
        if(minesweep.occupied[x][y] == true){
            //gotKilled();
            cout << "BANG! U B DED!";
            dead = true;
        }
        else {
            updateBoard(x, y);
            //minesweep.spaces[x][y] = '+';
            //minesweep.print();
        }
}


int main(){
    bool exploded = false;
    
    int x = 0, y = 0;
    
    minesweep.setup();
    minesweep.print();

    cout << "The bomb has been planted!" << endl << endl;
    while(!exploded){
        chooseSpace(x, y, exploded);
    }
    

    return 0;
}