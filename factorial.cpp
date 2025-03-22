#include<iostream>
#include<algorithm>

using namespace std;

int factorial(int i, int n, int result){
    if(i > n) return result;
    result = result * i;
    cout << result << endl;
    i++;
return factorial(i, n, result);
}

int main(){
int n;
int i = 1;
int result = 1;
cout << " Enter the number:";
cin >> n;
if(n == 0){
    cout << "factorial is 1" << endl;
}
else factorial(i, n, result);
}