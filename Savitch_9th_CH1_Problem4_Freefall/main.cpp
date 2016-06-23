/* 
 * File:   main.cpp
 * Author: Jose Uribe
 *
 * Created on June 20, 2016
 * Purpose: Free fall project
 */ 

//System Libraries
#include <cstdlib> //System libraires 
#include <iostream>
using namespace std; //namespace of the system libraries

//User libraries. We don't have these yet

//Global constant libraries/conversions
const float GRAVITY = 32.174f; // acceleration sea level ft/sec/sed
//Function Prototypes 

//Execution 


int main(int argc, char** argv) {
    //Declare Variable
    float time; // time in seconds  
    float dist; // distance in ft 
    
    //Input data
    cout << " Input time for free-fall in seconds " << endl;
    cin >> time;
    
    //Process data
    //dist = 1/2GRAVITY*time*time; give zero because of integer division 
    //dist = 1.0/2GRAVITY*time*time;
    dist = GRAVITY*time*time/2;
    
    //Output Process data
    cout << "The distance dropped during " << time << " seconds is = "
         << dist << "ft" << endl;
    
    //Exit stage right!
    
    return 0;
}

