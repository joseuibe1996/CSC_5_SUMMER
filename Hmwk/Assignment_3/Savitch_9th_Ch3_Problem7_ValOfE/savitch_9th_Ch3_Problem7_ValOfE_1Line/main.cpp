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
    float apprxEx = 1, term = 1, tol = 1e-6f, x;
    
    //Input data
    cout << "This program calculates the e^x " << endl;
    cout << "Input the n which will then output e^x " << endl;
    cin >> x;
    
    //Process data
    int n;
    for (n = 1; term > tol; term *= x / n, apprxEx += term, n++){}

    //Output Process data
    cout << "Exact        e^" << x << "  =  " << exp(x) << endl;
    cout << "Approximate  e^" << x << "  =  " << apprxEx << " with " 
         << n << " terms " << endl; 
    
    //Exit stage right!
    
    return 0;
}

