/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on June 27, 2016
 * Purpose:  BMR rhymes with Candy Bar  
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
    char mf; //Male female calculations
    float BMR, chocBars = 230.0f;
    float lbs, inches, yrs;
    int nBArs;
    
    //Input data
    cout << "Candy bar calculation to maintain weight "  << endl; 
    cout << "Eat less than this to loose weight! " << endl;
    cout << "Input male or female with m or f " << endl;
    cin >> mf;
    cout << "Input weight(lbs), height(inches), age(yrs)" << endl;
    cin >> lbs >> inches >> yrs;
    
    //Process data
    if(mf == 'm' || mf == 'M' ){
        BMR = 66 + 6.3 * lbs + 12.9 * inches - 6.8 * yrs;
    }else{
        BMR = 655 + 4.3 * lbs + 4.7 * inches - 4.7 * yrs;
    }
    nBArs = BMR / chocBars + 1;
    
    //version 2 
    // BMR=(mf == 'm' || mf == 'f' )?
        //BMR = 66 + 6.3 * lbs + 12.9 * inches - 6.8 * yrs: //male
        //BMR = 655 + 4.3 * lbs + 4.7 * inches - 4.7 * yrs; //female 
    //nBArs = BMR / chocBars + 1;
    
    
    //Output Process data
    cout << "Eat less than " << nBArs<<" chocolate bars to loose weight "<<endl;
    
    //Exit stage right!
    
    return 0;
}

