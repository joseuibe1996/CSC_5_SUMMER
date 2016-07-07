/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on July 06, 2016
 * Purpose: E to the x
 */ 

//System Libraries
#include <cstdlib> 
#include <iostream>
#include <cmath>

using namespace std; //namespace of the system libraries

//User libraries. We don't have these yet

//Global constant libraries/conversions

//Function Prototypes 

//Execution 


int main(int argc, char** argv) 
{
    //Declare Variable
    float apprxEx = 1, x;
    
    //Input data
    cout << "This program calculates the e^x " << endl;
    cout << "Input the n which will then output e^x " << endl;
    cin >> x;
    
    //Process data
    for (int n = 1; n <= 12; n++){
        unsigned int fact = 1;
            for (int i = 1; i <= n; i++){
                 fact *= i;
        }
        apprxEx += (pow(x, n)/fact);
    }
    //Output Process data
    cout << "Exact        e^" << x << "  =  " << exp(x) << endl;
    cout << "Approximate  e^" << x << "  =  " << apprxEx << endl; 
    
    //Exit stage right!
    
    return 0;
}

