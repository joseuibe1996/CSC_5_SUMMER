/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on July 07, 2016
 * Purpose:  Pi infinite series - changed to my style + review from lab
 */ 

//System Libraries
#include <cstdlib>   //input / output
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
#include <iomanip>   //Format Library

using namespace std; //namespace of the system libraries

//User libraries. We don't have these yet

//Global constant libraries/conversions
const float PI = 4 * atan(1); //exact Pi value
//Function Prototypes 

//Execution 


int main(int argc, char** argv) 
{
    //Declare Variable
    float apprxPI = 0, tol;
    
    //Input Data
    cout << "Tolerance of the approximate PI to a power of 10^-" << endl;
    cin >> tol;
    tol = pow(10, -tol); // 10 to the power of -tol = pow(10, -tol)
    cout << "The tolerance = " << tol << endl;
    
    //Process the Data
    float sumTerm = 1;
    int nTerm = 0;
    for(int denom = 1; sumTerm > tol; nTerm += 2, denom += 4){
        sumTerm = 1.0f / denom - 1.0f / (denom + 2);
        apprxPI += sumTerm;
    }
    apprxPI *= 4;
    
    //Output the processed Data
    cout << PI << " is approximated by " << apprxPI << " with ";
    cout << nTerm << " terms" << endl;
    
    //Exit stage right!
    
    return 0;
}

