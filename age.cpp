#include<iostream>
#include<string>

using namespace std;
// Calculating age in days
int main(){
string DOB;
cout << "Enter your DOB(mm/dd/yyyy):";
cin >> DOB;
int year, date, month;
sscanf(DOB.c_str(), "%d/%d/%d" , &month, &date, &month);
if((2025 - year) > 120){
cout << "Invalid DOB, person can't be older than 120 years" << endl;
}
else{
    




}



}