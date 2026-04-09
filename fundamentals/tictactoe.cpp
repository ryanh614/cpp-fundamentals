#include <iostream>
#include <string>
using namespace std; 

char board[3][3] = {{' ',' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

//game logic: print board, x starts, check win, change counter, print board again, repeat



void print_board(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << endl;
        if (i < 2) {
            cout << "---|---|---" << endl; 
        }
    }
}

bool check_win(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) return true;
    }

    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) return true; 
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) return true; 
    return false; 
}

bool check_tie() {
    for (int i = 0; i < 3; i++) 
        for (int j = 0; j < 3; j++) 
            if (board[i][j] == ' ') return false; 
    return true; 
}

int main() {
    print_board(board);
    return 0; 
}