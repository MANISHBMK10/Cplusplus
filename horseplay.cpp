#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

vector<string> possible_moves(string horse){
 vector<string> moves;  
int x,y;
int row = horse[0] - 'a' +1;
int column = horse[1] - '0';
int dx[8] = {1, 1, 2, 2, -1, -1, -2, -2};
int dy[8] = {2, -2, 1, -1, 2, -2, 1, -1};
for (int i=0; i<8; i++){
        x = row + dx[i];
        y = column + dy[i];
        if(x>=0 && x<9 && y>=0 && y<9){
            string new_pos = "";
            new_pos += x + 'a' - 1;
            new_pos += y + '0';
            moves.push_back(new_pos);    
            }
        }
return moves;
}
int main5(){
    string horse;
    cout << "Enter horse position:" << endl;
    cin >> horse;
    vector<string> moves = possible_moves(horse);
    cout << "possible moves are :" << endl;
    for(int i=0; i<moves.size();i++){
        cout << moves[i]<<endl;
    }
}    