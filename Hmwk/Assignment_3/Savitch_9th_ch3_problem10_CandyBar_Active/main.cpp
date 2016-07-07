/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on July 06, 2016
 * Purpose:  BMR rhymes with Candy Bar  / Active excersise 
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
    float BMR, chocBars = 230.0f, BMR_Temp;
    float lbs, inches, yrs;
    int nBArs;
    char intensity;
    
    //Input data
    cout << "Candy bar calculation to maintain weight "  << endl; 
    cout << "Eat less than this to loose weight! " << endl;
    cout << "Input male or female with m or f " << endl;
    cin >> mf;
    cout << "Input weight(lbs), height(inches), age(yrs)" << endl;
    cin >> lbs >> inches >> yrs;
    cout << "How intense would you say you exercise? " << endl;
    cout << "For Sedentary (rarely exercise) = 1, ";
    cout << "Somewhat active (occasionally) = 2" << endl;
    cout << "Active (3-4 days a week) = 3, Highly Active (everyday) = 4 ";
    cout << endl;
    cin >> intensity;
    
    //Process input data
    if(mf == 'm' || mf == 'M' ){
        BMR_Temp = 66 + 6.3 * lbs + 12.9 * inches - 6.8 * yrs;
    }else{
        BMR_Temp= 655 + 4.3 * lbs + 4.7 * inches - 4.7 * yrs;
    }
    BMR = BMR_Temp; // holds the initial BMR  
    
    switch (intensity){ // switch helps determine exercise intensity
        case '1': 
            //Process data
            BMR_Temp *= .2; // BMR_Temp finds the amount to add to initial BMR
            BMR += BMR_Temp; // adds the amount of BMR_temp to initial BMR
            break;
        case '2': 
            //Process data
            BMR_Temp *= .3; // BMR_Temp finds the amount to add to initial BMR
            BMR += BMR_Temp; // adds the amount of BMR_temp to initial BMR
            break;
        case '3': 
            //Process data
            BMR_Temp *= .4; // BMR_Temp finds the amount to add to initial BMR
            BMR += BMR_Temp; // adds the amount of BMR_temp to initial BMR
            break;
        case '4': 
            BMR_Temp *= .5; // BMR_Temp finds the amount to add to initial BMR
            BMR += BMR_Temp; // adds the amount of BMR_temp to initial BMR
            break;
        default:
            cout << endl;
            cout << "OOps.. You didn't enter a # run the program again" << endl;
            return 1; // ends program 
    }
    
    nBArs = BMR / chocBars + 1; // # choco bars u can eat 
            
    //Output Process data
    cout << "Eat less than " << nBArs << " chocolate bars to loose "
            "weight " << endl;
    
    //version 2 
    // BMR=(mf == 'm' || mf == 'f' )?
        //BMR = 66 + 6.3 * lbs + 12.9 * inches - 6.8 * yrs: //male
        //BMR = 655 + 4.3 * lbs + 4.7 * inches - 4.7 * yrs; //female 
    //nBArs = BMR / chocBars + 1;
    
    
    
    //Exit stage right!
    
    return 0;
}

