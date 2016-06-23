/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on June 23, 2016
 * Purpose:  Diamond Pattern
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
    char l; // letter/symbol to do the diamond with.
    
    //Input data
    cout << "Enter a symbol or letter to make a diamond with it ! " << endl;
    cin >> l;
    //Process data
    
    //Output Process data
    cout << endl;
    cout << setw(1) << setfill(l) << "   " << l << endl;
    cout << "  " << setw(3) << l << endl;
    cout << " " << setw(5) << l << endl;
    cout << setw(7) << l << endl;
    cout << " " << setw(5) << l << endl;
    cout << "  " << setw(3) << l << endl;
    cout << setw(1) << setfill(l) << "   " << l << endl;
    //Exit stage right!
    
    return 0;
}

