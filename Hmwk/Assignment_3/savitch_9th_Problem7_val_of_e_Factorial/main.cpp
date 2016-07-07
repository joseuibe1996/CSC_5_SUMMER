/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on July 06, 2016
 * Purpose: Factorial problem
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
    unsigned int fact = 1, n;
    
    //Input data
    cout << "This program calculates the factorial " << endl;
    cout << "Input the n which will then output n! " << endl;
    cin >> n;
    
    //Process data
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    //Output Process data
    cout << n << "! =  " << fact << endl;
    
    //Exit stage right!
    
    return 0;
}

