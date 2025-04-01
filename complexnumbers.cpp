#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
// complex interger arthimetic
using namespace std;

class Complex{
    public :
    int a, b, c, d;
    
    void add(int a, int b, int c, int d) {
        int x, y;
        x = a + c;
        y = b + d; 
        cout << x << "+i(" << y << ")" << endl; 
    }
    void sub(int a, int b, int c, int d) {
        int x, y;
        x = a - c;
        y = b - d; 
        cout << x << "+i(" << y << ")" << endl;      
    }
    void mul(int a, int b, int c, int d) {
        int x, y;
        x = (a*c) - (b*d);
        y = (b*c) + (a*d); 
        cout << x << "+i(" << y << ")" << endl; 
    }
    void div(int a, int b, int c, int d) {
        int x, y;
        y = ((b*c) - (a*d))/(pow(c,2) + pow(d,2));
        if(y ==0) return;
        else{
        x = ((a*c) + (b*d))/(pow(c,2) + pow(d,2));
        cout << x << "+i(" << y << ")" << endl;
        }   
    }          

};

int main7(){

    Complex numbers;
    string z1, z2;
    char op;
    int a, b, c, d;
    cout << " Enter first Complex Number:(a+ib)" << endl;  
    cin >> z1;
    cout << " Enter second Complex Number:(c+id)" << endl;
    cin>> z2;
    sscanf(z1.c_str(),"%d+i%d" , &numbers.a, &numbers.b);
    sscanf(z2.c_str(),"%d+i%d" , &numbers.c, &numbers.d);
    cout << " Enter the operation:{+,-,*,/}" << endl;
    cin >> op;
    switch (op){
        case '+' : {numbers.add(numbers.a, numbers.b, numbers.c, numbers.d);break;}
        case '-' : {numbers.sub(numbers.a, numbers.b, numbers.c, numbers.d);break;}
        case '*' : {numbers.mul(numbers.a, numbers.b, numbers.c, numbers.d);break;}
        case '/' : {numbers.div(numbers.a, numbers.b, numbers.c, numbers.d); break;}
        
}
}