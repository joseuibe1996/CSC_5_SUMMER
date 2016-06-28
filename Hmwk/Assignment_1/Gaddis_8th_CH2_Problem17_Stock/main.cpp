/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on June 22, 2016 9:00
 * Purpose:  Stock Problem 
 */ 

//System Libraries
#include <cstdlib> 
#include <iostream>
#include <iomanip> //input/output manipulation

using namespace std; //namespace of the system libraries

//User libraries. We don't have these yet

//Global constant libraries/conversions

//Function Prototypes 

//Execution 


int main(int argc, char** argv) 
{
    //Declare Variable
    unsigned short nShares = 750; // Stocks bough
    unsigned char stckPrce = 35; //Value of stock 
    float commiss = 2e-2f; // 2% commission  
    float valStck, cPaid, totPaid;
    
    //Input data
    
    //Process data
    valStck = nShares * stckPrce; // VAlue of stock in dollars
    cPaid = valStck * commiss; //commission paid
    totPaid =valStck + cPaid;// total paid 
    
    //Output Process data
    cout << fixed << setprecision(2) << showpoint;
    cout << "Price paid for he stock       = $" << setw(8) << valStck << endl;
    cout << "Commission Paid               = $" << setw(8) << cPaid << endl;
    cout << "Total cost of the transaction = $" << setw(8) <<  totPaid << endl;
    
    //Exit stage right!
    
    return 0;
}

