/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on June 27, 2016
 * Purpose:  F to Celcius
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
    float ceq, f, cintrp;
    float f1 = 32.0f, f2 = 212.0f, c1 = 0.0f, c2 = 100.0f;
    
    //Input data
    cout << "Input the temperature in degrees Fahrenheit";
    cout << " for conversion to celsius " << endl;
    cin >> f;
    
    //Process data
    ceq = (f-32) * 5.0/9 ; // linear equation y = mx + b
    cintrp  = c1 + (c2-c1) * (f - f1)/(f2 - f1); 
    // similar triangles or linear interpolation 
    
    //Output Process data
    cout << f << " deg in Fahrenheit is = " << ceq << " deg centigrade" << endl;
    cout << f << " deg in Fahrenheit is = " << cintrp <<" deg centigrade"<<endl;
    //Exit stage right!
    
    return 0;
}

