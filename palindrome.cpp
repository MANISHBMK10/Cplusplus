#include<iostream>
#include<algorithm>
 
using namespace std;

//palindrome: checks if the string is same from both ends.
bool palindrome(string k){
    string rev =k ;
    reverse(rev.begin(),rev.end());
    return rev == k;
    }

int main1()
{
    string s;
    cout << "Enter the string:";
    cin >> s;
    cout<< "The string is " << (palindrome(s)? "a palindrome" : "not a palindrome") << endl;
return 0;
}


