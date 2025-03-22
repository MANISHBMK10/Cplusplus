#include<iostream>
#include<algorithm>

using namespace std;

int main3(){
int n;
cout << "Enter a positive integer" << endl;
cin >> n;
if( n < 1)
{
    cout << "This is not a positive integer" << endl;
    exit(1);
    //retunr(1); --this can also be used.
}
for( int i = 1; i<=n; i++){
    if(i%5==0 && i%3 ==0){
        cout << "FizzBuzz" << endl;
    }
    else if(i%5==0){
        cout <<"Buzz" << endl;
    }
    else if(i%3==0){
        cout << "Fizz" << endl;
    }
    else{ cout << i << endl;}
};
return 0;

}