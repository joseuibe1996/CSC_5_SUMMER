/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on June 27, 2016
 * Purpose:  Miles Per Gallon
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
    unsigned int nGalHold, nMiDrive; //# of gallons car holds & # miles can drive 
    float MPG; // miles per gallon
    
    //Input data
    cout << "How many gallons of gas can your car hold? " << endl;
    cin >> nGalHold;
    cout << "How many miles can you drive on a full tank? " << endl;
    cin >> nMiDrive;
    
    //Process data
    MPG = nMiDrive/static_cast<float>(nGalHold); // static cast is for accuracy
    
    //Output Process data
    cout << fixed << setprecision(2) << showpoint; // 2 decimal places
    cout << "Your car does " << MPG << "mpg ! " << endl;
    
    //Exit stage right!
    
    return 0;
}

