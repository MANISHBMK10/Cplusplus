#include<iostream>
#include<string>
#include<sstream>
#include<fstream>

using namespace std;
//checking whether json file is valid!

int main15(){

    ifstream inFile("jason.json");

    if(!inFile) cout << "Cannot open file" << endl;

    else{

        cout << "checking validation..." << endl;

        int count_c = 0, count_b = 0, count_q = 0;

        char letter;

        while(inFile.get(letter)){

            if(letter == '{') count_c++;

            else if(letter == '}') count_c--;

            else if(letter == '[') count_b++;

            else if(letter == ']') count_b--;

            else if(letter == '"') count_q++;


}


if(count_c == 0 && count_b == 0 && count_q % 2 == 0)

cout << "your .json file is valid" << endl;

else cout << "Invalid .json file" << endl;

}

inFile.close();

return 0;

}