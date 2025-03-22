#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool check_bitonic(const vector<int> &vec, int n){
    int i = 0;
    bool increasing = false;
    while (i<n-1 && vec[i]==vec[i+1])  // ignore repreated values
    i++;
    if(i == n-1) return true;
    if(vec[i]> vec[i+1])                  // first slope
    while(i<n-1 && vec[i]>= vec[i+1])  
    i++;//return true;
    else if (vec[i] < vec[i+1])
    {
    while (i <n-1 && vec[i] <= vec[i+1])
    i++;}
    if(i == n-1) return true;

    if(vec[i]> vec[i+1])                  // second slope
    while(i<n-1 && vec[i]>= vec[i+1])
    i++;//return true;
    else if (vec[i] < vec[i+1])
    {while (i <n-1 && vec[i] <= vec[i+1]){
        i++;
    }
}
    if(i == n-1) return true;


    if(vec[i]> vec[i+1]){                // third slope
    increasing = true;
    while(i<n-1 && vec[i]>= vec[i+1])  
    i++;}
    else if (vec[i] < vec[i+1])
    {   increasing = false;
        while (i <n-1 && vec[i] <= vec[i+1]){
        i++;
    }
    }
    
    if( i < n-1)
    return false;

    if(increasing && vec[i] >= vec[0])
    return true;
    if(!increasing && vec[i] <= vec[0])
    return true;
    return false;
    
}
int main(){
int n;
cout << "Enter the no. of elements" << endl;
cin >> n;
vector<int> myvec(n);
    cout << "Enter the sequence: ";
    for (int i = 0; i < n; i++) {
        cin >> myvec[i];
    }  
cout <<"This sequence is " << (check_bitonic(myvec, n) ? "bitonic" : "not bitonic") << endl;
}
