// C++ Code Challenges, LinkedIn Learning

// Challenge #9: Fixing Faulty Code
// Fix the bugs in the provided code.
// The application is supposed to ask the user for a string, and print the number of vowels contained in the string.

// For example: 
// "I love my dog" has 4 vowels, "education" has 5 vowels, and "Sly spy by my crypt" has 0 vowels.
#include<iostream>
#include <string>
using namespace std;

// vowel_count()
// Summary: This function counts the number of vowels in an incoming string.
// Arguments:
//           str: The string to analyze.
// Returns: An integer with the vowel count.
int vowel_count(const string str){
    int count=0;
    for(int i=0; i<str.length(); i++){
        switch(str[i]){
            case 'a': {count++; break;}
            case 'e': {count++; break;}
            case 'i': {count++; break;} 
            case 'o': {count++; break;} 
            case 'u':  {count++; break;}
            case 'A':  {count++; break;}
            case 'E':  {count++; break;}
            case 'I':  {count++; break;}
            case 'O':  {count++; break;}
            case 'U':  {count++; break;}
            default : continue;
        }}
    return count;
}

// Faulty code, main()
// Summary: This application ask the user for a string, and prints the number of vowels in it.
int main9(){
    string input; 
    cout << "Enter some text: " << flush;
    getline(cin, input);
    cout << "\nThe text you entered contains " << vowel_count(input) << " vowels.\n\n";
return 0;
}
 