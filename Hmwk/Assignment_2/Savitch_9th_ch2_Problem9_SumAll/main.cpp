/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on July 05, 2016
 * Purpose:  Sum of All
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
    int a, b, number, sum = 0, c, sum_neg = 0, sum_pos = 0;
    a = 0, b = 1, c = 0;
    
    //Loop
    do{
        //Input Data 
        cout << "Chose number #" << b << " : " << endl;
        cin >> number;
        
        //Process data
        a++;// Loop counter 
        b++;// number counter
        sum += number; //sum of numbers
        c++; //sum so far -counter
        
        //Output sum 
        if(c <= 9){
            cout << "The sum so far is " << sum << endl;
        }
        
        //Process data for new sum
        if(number <= 0){
            sum_neg += number;
        }
        if(number > 0){
            sum_pos += number;
        }
        
        //final program output
        if(c == 10){
            cout << "Your final sum is " << sum << endl;
            cout << "The sum of your negative numbers is " << sum_neg << endl;
            cout << "The sum of your positive numbers is " << sum_pos << endl;
        }
    }while (a < 10); // condition to keep running loop
    
    //Exit stage right!
    
    return 0;
}

