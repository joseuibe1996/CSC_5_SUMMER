/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on June 20, 2016
 * Purpose: Land Conversion problem
 */ 

//System Libraries
#include <cstdlib> 
#include <iostream>
using namespace std; //namespace of the system libraries

//User libraries. We don't have these yet

//Global constant libraries/conversion
const float CNVFTACR = 4.356e4f; //conversion from ft^2 to acres
const float CNVMIFT = 1/5.28e3f; //conversion from miles to ft

//Function Prototypes 

//Execution 


int main(int argc, char** argv) 
{
    //Declare Variable
    float nAcres; //input
    float nSqMi; // output for number of sq miles 
    
    //Input data
    cout << "Enter the number of acres to convert to square miles" << endl;
    cin >> nAcres;
            
    //Process data
    nSqMi = nAcres*CNVFTACR*CNVMIFT*CNVMIFT;
    
    //Output Process data
    cout << "The number of acres is = " << nSqMi << " Miles squared." << endl;
    
    //Exit stage right!
    
    return 0;
}

