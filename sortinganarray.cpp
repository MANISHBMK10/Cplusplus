#include<iostream>
#include<algorithm>

using namespace std;

void swap(int& a, int& b){
    int c = a;
    a = b;
    b = c;
}

void bubblesort(int a[], int n){
for(int i = 0; i<n; i++){
    for(int j = 0; j<n-i-1;j++){

    if(a[j] >a[j+1]){
        swap(a[j], a[j+1]);
    }}
    }
    int i = 0;
    while(i != n)
    {
        cout << a[i] << endl;
        i++;
}  
}


int main2(){
    int n;
    cout << "Enter number of elements:" << endl;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the array:";
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    bubblesort(arr, n);
    delete[] arr;
    return 0;}