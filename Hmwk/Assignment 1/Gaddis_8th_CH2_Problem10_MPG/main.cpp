/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on June 24, 2016
 * Purpose:  Miles per gallon
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
    int galCap = 15, miTR = 375; //GAllons capacity and miles driven til refuel
    float MPG; // miles per gallon
    
    //Input data
    MPG = miTR/galCap; // find out how many miles per gallon
    //Process data
    
    //Output Process data
    cout << "The car does " << MPG << " miles per gallon of fuel! " << endl;
    //Exit stage right!
    
    return 0;
}

