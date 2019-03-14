#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;

class Board {
    private:
        static const int B_SIZE = 8;
        
        

    public:
    //cheated and made them public. . . for now.
    char spaces[B_SIZE][B_SIZE];
    bool occupied[B_SIZE][B_SIZE];

    void setup(){
        for(int i = 0; i < B_SIZE; i++){
            for(int j = 0; j < B_SIZE; j++){
                spaces[i][j] = '-';
                occupied[i][j] = false;
            }
        }

        

        //sorta randomizes in more bombs
        for(int x = 0; x < 6; x++){
            for(int y = 0; y < 6; y++){
                srand(time(NULL));
                x = rand() % B_SIZE;
                srand(time(NULL));
                y = rand() % B_SIZE;

                occupied[x][y] = true;
                //visualize bomb spaces to make sure they are placing.
                spaces[x][y] = 'x';
            }
            
        }
    }

    void print(){
        for(int i = 0; i < B_SIZE; i++){
            cout << endl;
            for(int j = 0; j < B_SIZE; j++){
                cout << spaces[i][j] << " ";
            } 
        }
    }
};