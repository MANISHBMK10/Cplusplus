#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

bool ip_check(string ip){
    int a, b, c, d;
sscanf(ip.c_str(), "%d.%d.%d.%d" , &a , &b, &c, &d);
if(a>=0 && a <256){
    if(b>=0 && b <256){
        if(c>=0 && c <256){
            if(d>=0 && d <256){
                return true;
            }
            else return false;

        }else return false;


}else return false;
}else return false;

}

int main(){
    string ip;
    cout << "enter the IP address:" << endl;
    cin >> ip;
    cout << (ip_check(ip)? "IP address is valid" : "Invalid IP address") << endl;


}