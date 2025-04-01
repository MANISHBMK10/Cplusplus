#include<iostream>
#include<sstream>
#include<fstream>
#include<vector>

using namespace std;
// checks if people are related!
void first_last(vector<string> names){
int count = 0;
vector<string> Firstname, Lastname;
for(const auto& Fullname : names){
string first, last;    
istringstream ss(Fullname);
ss >> first >> last;
Firstname.push_back(first);
Lastname.push_back(last);
}
for(int i =0; i< Lastname.size() ; i++){
    for(int j=i; j< Lastname.size(); j++){
        if(i!=j){
        if(Lastname[i] == Lastname[j]) {
            count++;
            cout << names[i] << " and " << names[j] << " are related!" << endl;
        }

        }
    }

}
if(count==0){cout << "No related people in this group!" << endl;
}
}



void split_name(string line){
vector<string> names;
stringstream ss(line);
string name;
while(getline(ss, name, ',')){
names.push_back(name);
}

first_last(names);
}




int main12(){
    string line;
    ifstream inFile("names.csv");
    
    if(!inFile){
    cout << "Error! File doesn't exist" << endl;
    }
    while(getline(inFile, line)){
    cout << "List of people :" << endl << line << endl;
    split_name(line);
    }

    inFile.close();
    return 0;

}