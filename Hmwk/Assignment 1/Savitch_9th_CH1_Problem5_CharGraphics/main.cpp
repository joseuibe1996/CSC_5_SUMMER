/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on June 22, 2016 9:24
 * Purpose:  Char Graphics "The Big C"
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
    char c; //Char to use o crate a BIG C output 
    
    //Input data
    cout << "Choose the leter to use in foming of BIG C output " << endl;
    cin >> c;
    
    //Process data
    
    //Output Process data
    cout << "    " << c << " " << c << " " << c << endl; 
    cout << "  " << c << "      " << c <<  endl;
    cout << " " << c << endl; 
    cout << " " << c << endl; 
    cout << " " << c << endl; 
    cout << " " << c << endl; 
    cout << " " << c << endl; 
    cout << "  " << c << "      " << c <<  endl;
    cout << "    " << c << " " << c << " " << c << endl; 
    
    //Exit stage right!
    
    return 0;
}

