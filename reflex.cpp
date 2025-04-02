#include<iostream>
#include<string>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time() to seed random number generator
#include <chrono>   // For time-related functions
#include <thread> 
#include<algorithm>

using namespace std;
using namespace chrono;
//Reflex to write down the displayed 3 letter word in 3 sec



int main14(){
string array[10] = {"mat" , "cat", "bat", "dog", "ipl", "man", "ball", "ten", "one", "zip"};
srand(time(0));
int delay = rand() % 7 + 4;
cout << "Waiting time:" << delay << endl;
this_thread :: sleep_for(chrono::seconds(delay));
cout << "get ready to type in 2 secs" << endl;
this_thread :: sleep_for(chrono::seconds(1)); // a second delay
string word = array[rand() % 10];
string input;
auto start = high_resolution_clock::now();
cout << word << endl;
cin >> input;
auto end = high_resolution_clock::now();
auto elasped = duration<double>(end- start);
transform(input.begin(), input.end(), input.begin(), ::tolower);
transform(word.begin(), word.end(), word.begin(), ::tolower);
if(input == word && elasped.count() <= 2.0) cout << "Success!";
else cout << "Failed to type in 2secs. or incorrect word!";

return 0;
}