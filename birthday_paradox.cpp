#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//birthday paradox :
double birthday_probability(int n){
double probability;
double simulations = 1000000;
double match_count = 0;
for( int sim = 0; sim < simulations; sim++){
     int bday[n];
     int count =0;
     for( int i =0; i<n; i++){
        bday[i] = rand() % 366;
    
     };
     for(int i =0; i<n; i++){
            for(int j =i+1; j<n; j++){
                if(bday[i] == bday[j]) {
                    count++;
                    break;



                }
            }
     }
     if(count>0) match_count++;


}

probability = match_count/simulations;
return probability;
}

int main16(){

    int n;
    cout << "Enter number of people:" << endl;
    cin >> n;

   cout << "same birthday probability of alteast 2 persons in " << n << " people in a year :"<< birthday_probability(n) << endl;




return 0;
}