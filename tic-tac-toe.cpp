#include<iostream>
#include<algorithm>

using namespace std;
//tic-tac-toe game, hard to beat!
bool check_draw(char array[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3 ; j++){
            if(array[i][j] == ' ')
            return false;
        }
    }
    }

void player_move(int x, char array[3][3]){
switch (x) {
     case 1 : array[0][0] = 'X'; break; 
     case 2 : array[0][1] = 'X'; break;
     case 3 : array[0][2] = 'X'; break;
     case 4 : array[1][0] = 'X'; break;
     case 5 : array[1][1] = 'X'; break;
     case 6 : array[1][2] = 'X'; break;
     case 7 : array[2][0] = 'X'; break;
     case 8 : array[2][1] = 'X'; break;
     case 9 : array[2][2] = 'X'; break;
     default : break;
}
}

int win_lose(char array[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (array[i][0] == array[i][1] && array[i][1] == array[i][2] && array[i][0] != ' ') 
            return (array[i][0] == 'O' ? 10 : -10);  // Fixed incorrect check

        if (array[0][i] == array[1][i] && array[1][i] == array[2][i] && array[0][i] != ' ') 
            return (array[0][i] == 'O' ? 10 : -10);
    }

    if (array[0][0] == array[1][1] && array[1][1] == array[2][2] && array[0][0] != ' ') 
        return (array[0][0] == 'O' ? 10 : -10);  

    if (array[0][2] == array[1][1] && array[1][1] == array[2][0] && array[0][2] != ' ') 
        return (array[0][2] == 'O' ? 10 : -10);  

    return 0;
}



int minimax(char board[3][3], bool isMax, int depth) {
    int score = win_lose(board);
    
    if (score == 10) return score - depth;  // Prioritize quicker wins
    if (score == -10) return score + depth; // Prioritize delaying loss
    if (check_draw(board)) return 0;        // Draw

    if (isMax) {
        int best = -1000;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    board[i][j] = 'O';
                    best = max(best, minimax(board, false, depth + 1));
                    board[i][j] = ' ';
                }
            }
        }
        return best;
    } else {
        int best = 1000;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    board[i][j] = 'X';
                    best = min(best, minimax(board, true, depth + 1));
                    board[i][j] = ' ';
                }
            }
        }
        return best;
    }
}


// AI Move using Minimax
void ai_move(char array[3][3]) {
    int bestVal = -1000;
    int bestMove[2] = {-1, -1};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (array[i][j] == ' ') {
                array[i][j] = 'O';
                int moveVal = minimax(array, false, 0);
                array[i][j] = ' ';

                if (moveVal > bestVal) {
                    bestMove[0] = i;
                    bestMove[1] = j;
                    bestVal = moveVal;
                }
            }
        }
    }
    array[bestMove[0]][bestMove[1]] = 'O';
}



void display_board(char array[3][3]){
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "|" << array[i][j];
        }
        cout << "|" << endl << "-------" << endl;
    }
}


int main11(){
char array[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
int x;
display_board(array);
while(true) {
cout << "Enter the number(1-9):" << endl << "------"<< endl << "|1|2|3|"<< endl << "------"<< endl <<"|4|5|6|"<< endl << "------"<< endl << "|7|8|9|" << endl;
cin >> x;
player_move(x, array);
display_board(array);
if(check_draw(array)) {cout << "Draw!" << endl;}
else if(win_lose(array) == 10) {cout << "AI wins" ; break;}
else if(win_lose(array) == -10) {cout << "Player wins" ; break;}
ai_move(array);
display_board(array);
if(check_draw(array)) {cout << "Draw!" ; break;}
else if(win_lose(array) == -10) {cout << "Player wins" ; break;}
else if(win_lose(array) == 10) {cout << "AI wins" ; break;}
}
return 0;
}