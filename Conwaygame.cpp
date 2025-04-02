#include<iostream>
#include<string>

using namespace std;
//Conway's game of life (blinker + glider)
void blinker(int array[10][10]){
array[5][4] = 1;
array[5][5] = 1;
array[5][6] = 1;
}

void glider(int array[10][10]){
    array[1][2] = 1;
    array[2][3] = 1;
    array[3][1] = 1;
    array[3][2] = 1;
    array[3][3] = 1;

}

int count_neighbors(int array[10][10], int x, int y){
    int count = 0;
for (int i = -1; i<=1; i++){
    for (int j = -1; j<=1; j++){
        if(i == 0 && j == 0) continue;
        else{
            int new_x = x+i;
            int new_y = y+j;
            if(new_x >= 0 && new_x < 10 && new_y >= 0 && new_y < 10){
            if(array[new_x][new_y] == 1) count ++;
        }
    }
    }
}
return count;
}

void update_grid(int array[10][10]){
int temp[10][10];
for(int i =0; i<10; i++){
    for(int j= 0; j< 10; j++){
        int neighbors = count_neighbors(array, i, j);
        if(array[i][j] == 1){ //cell is alive
            if( neighbors < 2 || neighbors > 3) temp[i][j] = 0; //Dies
            else if( neighbors == 2 || neighbors == 3) temp[i][j] = 1; //lives
        }

    else{ //dead cell
        if( neighbors == 3) temp[i][j] = 1; //lives
        else temp[i][j] = 0;
    }
      
    }
}

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            array[i][j] = temp[i][j];
        }
    
    }




}

void print(int array[10][10]){

    for(int i =0; i<10; i++){
        for(int j= 0; j< 10; j++){
            cout << " " << array[i][j];
            }
        cout << endl;
        }

}


int main14(){
int array[10][10];
for(int i =0; i<10; i++){
    for(int j= 0; j< 10; j++){
        array[i][j] = 0;
        }
    }
cout<< "Original grid:" << endl;
print(array);
cout<< "Blinker & Glider grid:" << endl;
blinker(array); 
glider(array); 
print(array);  
for(int gen = 0; gen<5; gen++){
cout << "Gen:" << gen << endl;    
update_grid(array);
print(array);
}
return 0;
}