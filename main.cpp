#include <iostream>
#include <string>

using namespace std;

int main(){

    const int B_SIZE = 8;

    char chess[B_SIZE][B_SIZE];

    for(int i = 0; i < B_SIZE; i++){
        for(int j = 0; j < B_SIZE; j++){
            chess[i][j] = '-';
        }
    }

    for(int i = 0; i < B_SIZE; i++){
        cout << endl;
        for(int j = 0; j < B_SIZE; j++){
            cout << chess[i][j] << " ";
        }
    }

    return 0;
}
