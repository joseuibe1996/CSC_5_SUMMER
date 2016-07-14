/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on July 13, 2016
 * Purpose:  Military time to standard 
 */ 

//System Libraries
#include <cstdlib>   //input / output
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
#include <fstream> 
#include <string>

using namespace std; //namespace of the system libraries

//User libraries. We don't have these yet

//Global constant libraries/conversions

//Function Prototypes 
void input(int &, int &);
void convrt(int, int, int &, int &, char &);
void output(int, int, char);
//Execution 


int main(int argc, char** argv){
    //Declare Variable
    char ampm;
    int milHr, milMin, min, hr;
    
    //Input data
    input(milHr, milMin);
    
    //Process data
    convrt(milHr, milMin, hr, min, ampm);
    
    //Output Process data
    output(hr, min, ampm);
    //Exit stage right!
    
    return 0;
}

void input(int &mhr, int &min){
    //Declare colon
    char colon;
    do{
        cout << "This program converts military time to standard time " << endl;
        cout << "Type in the millitary time in hh:mm" << endl;
        cin >> setw(2) >> mhr >> colon >> setw(2) >> min;
    }while(mhr >= 24 || min > 59);
        if(mhr < 10)cout << '0' << mhr;
        else cout << mhr;
        cout << colon;
        if(min < 10)cout << '0' << min;
        else cout << min;
        cout << " = ";
    }

    void convrt(int mhr, int mmin, int &hr, int &min, char &ap){
    //convert the hour
        hr = mhr;
        ap = 'A';
        if(hr > 12){
            hr -= 12;
            ap = 'P';
        }else if(hr == 12)ap = 'P';
        else if(hr == 0)hr = 12;
        min = mmin;
    }
    void output(int hr, int min, char ap){
        if(hr < 10)cout << '0' << hr;
        else cout << hr;
        cout << ":";
        if(min < 10)cout << '0' << min;
        else cout << min;
        cout << " " << ap << "M" << endl;
    }
