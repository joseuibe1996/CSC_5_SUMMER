/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on June 29, 2016
 * Purpose:  Test Average
 */ 

//System Libraries
#include <cstdlib> 
#include <iostream>
#include <iomanip>

using namespace std; //namespace of the system libraries

//User libraries. We don't have these yet

//Global constant libraries/conversions

//Function Prototypes 

//Execution 


int main(int argc, char** argv) 
{
    //Declare Variable
    int one, two, three, four, five; // five test score variables 
    float AVG; // average
    
    //Input data
    cout << "Please enter 5 test scores " << endl; 
    cin >> one >> two >> three >> four >> five;
    
    //Process data
    AVG = (static_cast<float>(one + two + three + four + five))/5;
            
    //Output Process data
    cout << fixed << setprecision(1) << showpoint;
    cout << "The average test score is " << AVG << "!" << endl;
    
    //Exit stage right!
    
    return 0;
}

