/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on July 11, 2016
 * Purpose:  
 */ 

//System Libraries
#include <cstdlib>   //input / output
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
#include <fstream> 

using namespace std; //namespace of the system libraries

//User libraries. We don't have these yet

//Global constant libraries/conversions

//Function Prototypes 
float save1(float, float, int);
float save2(float, float, int);
float save3(float, float, int);
float save4(float, float, int);
//Execution 


int main(int argc, char** argv) 
{
    //Declare Variable
    float fv, pv, intRate;
    int ncomPDS;
    
    //input  data
    pv = 100.0f; // fix principle in dollars
    intRate = 0.06f;
    ncomPDS = 12;
            
    //Output Process data
    cout << fixed << setprecision(2) << showpoint;
    cout << "Resultant savings F1 = $" << save1(pv, intRate, ncomPDS) << endl;
    cout << "Resultant savings F2 = $" << save2(pv, intRate, ncomPDS) << endl;
    cout << "Resultant savings F3 = $" << save3(pv, intRate, ncomPDS) << endl;
    cout << "Resultant savings F4 = $" << save4(pv, intRate, ncomPDS) << endl;
    
    //Exit stage right!
    
    return 0;
}

float save1(float p, float i, int n){
    return p * pow((1 + i), n);
}
float save2(float p, float i, int n){
    return p * exp(n * log(1 + i));
}
float save3(float p, float i, int n){
    for (int year = 1; year <= n; year++){
        p *= (1 + i);
    }
}
float save4(float p, float i, int n){
    if (n <= 0) return p;
    return save4(p, i, n- 1) * (1 + i ); 
}