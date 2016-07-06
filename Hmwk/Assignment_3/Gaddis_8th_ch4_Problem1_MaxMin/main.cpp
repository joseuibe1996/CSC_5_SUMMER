/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on July 0, 2016
 * Purpose:  
 */ 

//System Libraries
#include <cstdlib> 
#include <iostream>

using namespace std; //namespace of the system libraries

//User libraries. We don't have these yet

//Global constant libraries/conversions

//Function Prototypes 

//Execution 


int main(int argc, char** argv) 
{
    //Declare Variable
    int val1, val2;
    int large, small;
    
    //Input data
    cout << "Enter two numbers .. " << endl;
    cin >> val1 >> val2;
    
    //Process data
    large = val1 > val2? val1: val2; // checks if val1 greater than val2 
    small = val1 < val2? val1: val2; // checks if val1 less than val2
    //if large equals to small output that...
    large == small ? cout << "Both numbers are the same" << endl: 
    
    //Output Process data
    cout << "The large # is " << large << ". The small # is " << small; 
    
    //Exit stage right!
    
    return 0;
}

