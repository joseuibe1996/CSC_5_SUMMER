/* 
 * File:   main.cpp
 * Author: Jose Uribe
 *
 * Created on June 20, 2016
 * Purpose: Use Math Library 
 */ 

//System Libraries
#include <cstdlib> //System libraires 
#include <cmath> //Math Library
#include <iostream>

using namespace std; //namespace of the system libraries

//User libraries. We don't have these yet

//Global constant libraries/conversions
const float PI = 4 * atan(1); //PI to 7 significant digits
const float CNVRDDEG = PI/180; // Conversion from radians to degrees 

//Function Prototypes 

//Execution 


int main(int argc, char** argv)
{
    
    //Declare Variable
    float deg = 30; // 30 degrees
    float rad; // declare the radian equivalient
    float result; // result of the sign
    float x = 2;
    float y = 3;
    float z;
    float ze;
    float zm;
    
    
    //Input data
    rad = deg * CNVRDDEG;
    
    //Process data
    result = sin(rad);
    ze = exp(y*log(x));
    zm = x * x * x;
    
    //Output Process data
    cout << "PI = " << PI << endl; 
    cout << "Sin(" << deg << ") = " << result << endl;
    cout << "ze = " << x << "^" << y << " " << ze << endl;
    cout << "zm = " << x << "^" << y << " " <<  zm << endl;
    cout << "Failure 1 gives -->  #include < iostream> " << endl;
    cout << "Failure 2 gives -->  #include iostream> " << endl;        
    cout << "Failure 3 -->  leaving int out from int = no error " << endl; 
    cout << "Failure 4 -->  mispell main to min gives in function main" << endl;
    cout << "Failure 5 --> missing (int argc, char** argv) {" << endl;
    cout << "Failure 6 --> o is missing from cout cut " << endl; 
    //Exit stage right!
    
    return 0;
}

