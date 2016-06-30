/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on June 29, 2016
 * Purpose:  Math tutor
 */ 

//System Libraries
#include <cstdlib> 
#include <iostream>
#include <ctime> 

using namespace std; //namespace of the system libraries

//User libraries. We don't have these yet

//Global constant libraries/conversions

//Function Prototypes 

//Execution 


int main(int argc, char** argv) 
{
    
    // seed for he random number 
    
    srand(static_cast<unsigned int> (time(0)));
    
    //Declare Variable
    unsigned short r1, r2, result;
    unsigned short answer;
    
    //Input data
    r1 = rand() % 900 + 100;
    r2 = rand() % 900 + 100;
    result = r1 + r2; 
    
    //Process data
    
    //Output Process data
    cout << "Calculate the result of the following problem! " << endl; 
    cout << "Line up and type th resul " << endl;
    cout << "   " << r1 << endl;
    cout << " + " << r2 << endl;
    cout << " ------- " << endl;
    cout << "  "; 
    cin >> answer;
    
    //Output Process data
    if(result-answer == 0 ){
        cout << "Your answer is correct ! " << endl;
    }else{
        cout << "Wrong !!! The answer was " << answer << endl; 
    }
    //Exit stage right!
    
    return 0;
}

