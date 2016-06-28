/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on June 23, 2016 11:43
 * Purpose:  Sales Tax
 */ 

//System Libraries
#include <cstdlib> 
#include <iostream>
#include <iomanip>

using namespace std; //namespace of the system libraries

//User libraries. We don't have these yet

//Global constant libraries/conversions

//Function Prototypes 

//Execution 


int main(int argc, char** argv) 
{
    //Declare Variable
    int purchase = 95; // cost of purchase
    float sTax = 4e-2f, csTax = 2e-2f, totST; // State tax 4% and county tax 2% 
    //totST is the total Sales Tax
    
    //Input data
    
    //Process data
    sTax = 95*sTax; // Figuring out the State tax
    csTax = 95*csTax;// Figuring out the county tax
    totST = csTax + sTax; // Figuring out the total sales tax
    
    //Output Process data
    cout << fixed << setprecision(2) << showpoint; //decimal places to 2 points
    cout << "The total sales tax for a $" << purchase << " purchase is ";
    cout << totST << endl;
    cout << "Your state tax was $" << sTax << " and your county sales tax was $";
    cout << csTax << endl;
    //Exit stage right!
    
    return 0;
}

