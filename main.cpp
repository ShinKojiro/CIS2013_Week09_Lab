#include <iostream>
#include <string>
#include "Board.cpp"

using namespace std;
Board chess;
void updateBoard(int& x, int& y){
    chess.spaces[x][y] = '+';
    chess.print();
}

// void gotKilled(bool& dead){
//     cout << "BANG! U B DED!";

// }

void chooseSpace(int& x, int& y, bool& dead){
    cout << endl << "Choose a space that is hopefully not a bomb (x y): ";
        cin >> x >> y;
        x--;
        y--;
        if(chess.occupied[x][y] == true){
            //gotKilled();
            cout << "BANG! U B DED!";
            dead = true;
        }
        else {
            updateBoard(x, y);
            //chess.spaces[x][y] = '+';
            //chess.print();
        }
}


int main(){
    bool exploded = false;
    
    int x = 0, y = 0;
    
    chess.setup();
    chess.print();

    cout << "The bomb has been planted!" << endl << endl;
    while(!exploded){
        chooseSpace(x, y, exploded);
    }
    

    return 0;
}