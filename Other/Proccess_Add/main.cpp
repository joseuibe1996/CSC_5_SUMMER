/* 
 * File:   main.cpp
 * Author: Jose Uribe
 *
 * Created on June 20, 2016, 6:45 PM
 * Purpose: First Project
 */ 

//System Libraries
#include <cstdlib> //System libraires 
#include <iostream>
using namespace std; //namespace of the system libraries

//User libraries. We don't have these yet

//Global constant libraries/conversions

//Function Prototypes 

//Execution 


int main(int argc, char** argv) {
    //Declare Variable
    int  a, b, c; //Three integer variables
    
    //Input data
    //Prompt the user
    cout << "Input two integers --> DDDDDDDDDD DDDDDDDDDD" << endl; 
    cin >> a >> b; //input two Variables
    
    //Process data
    c = a + b; // add integers and place into third integer
    
    //Output Process data
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = a + b => " << c << endl;
    
    //Exit stage right!
    
    return 0;
}

