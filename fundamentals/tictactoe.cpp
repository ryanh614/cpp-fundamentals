#include <iostream>
#include <string>
using namespace std; 

char board[3][3] = {{' ',' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};



void print_board(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << endl;
        if (i < 2) {
            cout << "---|---|---" << endl; 
        }
}
}

int main() {
    print_board(board);
    return 0; 
}