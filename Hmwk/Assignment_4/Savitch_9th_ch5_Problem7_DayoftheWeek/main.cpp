/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on July 11, 2016
 * Purpose:  Day of the week
 */ 

//System Libraries
#include <cstdlib>   //input / output
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
#include <fstream> 
#include <string> //string library 

using namespace std; //namespace of the system libraries

//User libraries. We don't have these yet

//Global constant libraries/conversions

//Function Prototypes 
bool isLgYr(int);
int centVal(int);
int yrVal(int);
int monVal(int, int);
int dayVal(int, int , int);
string dayWeek(int, int, int);
int cvnMon(string);

//Execution 


int main(int argc, char** argv) 
{
    //Declare Variable
    string month;
    int day;
    int year;
    
    //Input data
    cout << "find the day of the week given any date " << endl;
    cout << "Input the month first ( i.e. January, February etc " << endl;
    cin >> month;
    cout << "Input the day of the month " << endl;
    cin >> day;
    cout << "Input the year " << endl;
    cin >> year;
    
            
    //Process data
    cout << "Year = 2000" << (isLgYr(2000)? " T": " F") << endl;
    cout << "Year = 1900" << (isLgYr(1900)? " T": " F") << endl;
    cout << "Year = 2016" << (isLgYr(2016)? " T": " F")<< endl;
    cout << "Year = 2015" << (isLgYr(2015)? " T": " F") << endl;
    cout << "Year = 2008 " << centVal(2008) << endl;
    cout << "Year = 2008 " << yrVal(2008) << endl;
    cout << "July 4th, 2008 " << dayWeek(4, 7, 2008) << endl;
    
    //Output Process data
    cout << month << " " << day << ", " << year << " is a " 
         << dayWeek(day,cvnMon(month), year);
    
    //Exit stage right!
    
    return 0;
}
string dayWeek(int day, int month, int year){
    switch(dayVal(day, month, year)){
        case 0: return "Sunday";
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday ";
        case 4: return "Thursday";
        case 5: return "Friday";
        default: return "Saturday";
    }
}
int cvnMon(string month){
    if(month == "January")   return 1;
    if(month == "February")  return 2;
    if(month == "March")     return 3;
    if(month == "April")     return 4; 
    if(month == "May")       return 5;   
    if(month == "June")      return 6;
    if(month == "July")      return 7;
    if(month == "August")    return 8;
    if(month == "September") return 9;
    if(month == "October")   return 10;
    if(month == "November")  return 11;
    return 12;
}

int dayVal(int day, int month, int year){
    return (day + monVal(month, year)+yrVal(year)+centVal(year)) % 7;
}
int monVal(int month, int year){
    switch(month){
        case 1: return (isLgYr(year)? 6 : 0);
        case 2: return (isLgYr(year)? 2 : 3);
        case 3:
        case 11: return 3;
        case 4: 
        case 7: return 6;
        case 5: return 1;
        case 6: return 4;
        case 8: return 2;
        case 9:
        case 12: return 5;
        default: return 0;
    }
}

int yrVal(int year){
    return year % 100 + year % 100 / 4;
}

int centVal(int year){
    return (3 - (year/100)%4) * 2;
}

bool isLgYr(int year){
    if((year % 400 == 0)||((year % 4 == 0)&&!(year %100 == 0)))return true;
    else return false;
}