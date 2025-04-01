#include<iostream>
#include<string>

using namespace std;
// Calculating age in days

bool is_leap_year(int year){
if( ((year % 4 == 0) && (year % 100) != 0) || (year % 400 ==0 )) return true;
else return false;

}
int get_days_in_a_month(int month, int year){

    if(month == 2)
    return ((is_leap_year(year)) ? 29 : 28);

    else if(month == 4 ||month == 6 ||month == 9 ||month == 11 ) return 30;
    else return 31;
 }


int main13(){
string DOB;
cout << "Enter your DOB(mm/dd/yyyy):";
cin >> DOB;
int year, date, month;
sscanf(DOB.c_str(), "%d/%d/%d" , &month, &date, &year);
if (month < 1 || month > 12 || date < 1 || date > get_days_in_a_month(month, year)) {
    cout << "Invalid date! Please enter a valid date." << endl;
    return 1;
}
int current_year = 2025, current_month = 4, current_date = 1;
if((current_year - year) > 120 || (year > current_year)||((year == current_year) && (month > current_month) )||((year == current_year) && (month == current_month) && (date > current_date))){
cout << "Invalid DOB, person can't be older than 120 years or the date is not valid" << endl;
}
else{
    int day_count = 0;
        for(int i= year; i <= current_year; i++){
            if(i == year && i != current_year){ // FIRST YEAR
                for(int j=month; j <= 12; j++){
                    if(j== month){day_count += (get_days_in_a_month(month, year) - date);}
                    else {day_count += get_days_in_a_month(j, i);}


            }
            }
            else if( i == current_year && i == year){ //current year && year of dob
                for(int j = month; j <= current_month; j++){
                    if(j == current_month){
                        if(date == current_date) return 0;
                            day_count += current_date;}
                    else day_count += get_days_in_a_month(j, current_year);
                }}

            else if( i == current_year && i != year){ //current year
                for(int j = 1; j <= current_month; j++){
                    if(j == current_month){day_count += current_date;}
                    else day_count += get_days_in_a_month(j, current_year);
                }
            }

            else  { //middle years
                for(int j=1; j <= 12; j++){
                    day_count += get_days_in_a_month(j, i);


                }



            }





                }
                cout << "Your age in days:" << day_count << endl;


            }// else bracket



       
       return 0; }//main bracket
            