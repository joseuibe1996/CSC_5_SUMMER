/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on June 29, 2016
 * Purpose:  Babylonian
 */ 

//System Libraries
#include <cstdlib> 
#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std; //namespace of the system libraries

//User libraries. We don't have these yet

//Global constant libraries/conversions

//Function Prototypes 

//Execution 


int main(int argc, char** argv) 
{
    //Declare Variable
    float n, guess, r;
    
    //Input data
    cout << fixed << setprecision(4) << showpoint;
    cout << "Program to calculate the sqaure root " << endl;
    cout << "input a number to see the repeitive aproximation " << endl;
    cout << "of the square root.. " << endl;
    cin >> n;
    
    //Process data
    guess =  n / 2;
    r = n / guess;
    guess = (guess + r) / 2;
    
    //Output Process data
    cout << "R = " << setw(10) << r << "   Guess = " << setw(10) << guess
         << "    sqrt (" << setw(10) << n << ")=" << setw(10) 
         << sqrt(n) << endl;
    
    //Process data
    r = n / guess;
    guess = (guess + r) / 2;
    
    //Output Process data
    cout << "R = " << setw(10) << r << "   Guess = " << setw(10) << guess
         << "    sqrt (" << setw(10) << n << ")=" << setw(10) 
         << sqrt(n) << endl;
    
    r = n / guess;
    guess = (guess + r) / 2;
    
    //Output Process data
    cout << "R = " << setw(10) << r << "   Guess = " << setw(10) << guess
         << "    sqrt (" << setw(10) << n << ")=" << setw(10) 
         << sqrt(n) << endl;
    
    //Process data
    r = n / guess;
    guess = (guess + r) / 2;
    
    //Output Process data
    cout << "R = " << setw(10) << r << "   Guess = " << setw(10) << guess
         << "    sqrt (" << setw(10) << n << ")=" << setw(10) 
         << sqrt(n) << endl;
    
    r = n / guess;
    guess = (guess + r) / 2;
    
    //Output Process data
    cout << "R = " << setw(10) << r << "   Guess = " << setw(10) << guess
         << "    sqrt (" << setw(10) << n << ")=" << setw(10) 
         << sqrt(n) << endl;
    
    //Process data
    r = n / guess;
    guess = (guess + r) / 2;
    
    //Output Process data
    cout << "R = " << setw(10) << r << "   Guess = " << setw(10) << guess
         << "    sqrt (" << setw(10) << n << ")=" << setw(10) 
         << sqrt(n) << endl;
    
    //Exit stage right!
    
    return 0;
}

