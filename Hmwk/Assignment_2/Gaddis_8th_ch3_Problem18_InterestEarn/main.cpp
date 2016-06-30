/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on June 29, 2016
 * Purpose:  Interest earned
 */ 

//System Libraries
#include <cstdlib> 
#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std; //namespace of the system libraries

//User libraries. We don't have these yet

//Global constant libraries/conversions

//Function Prototypes 

//Execution 


int main(int argc, char** argv) 
{
    //Declare Variable
    float i, pv, n; // interest rate, % value, number of compounding periods yr.
    float fv; // future value in $ 
    char choice; // character 1 or 2
    
    //Input data
    cout << "Calculate the future Value by approximation with the rule "
            "of 72 " << endl; 
    cout << "Type 1 to input the Present Value in $ and interest rate "
            "in $ " << endl;
    cout << "Type 2 to input the Present Value in $ and the number of years "
         << endl;
    cin >> choice;
    cout << endl;
    
    //Process data
    cout << fixed << setprecision(2) << showpoint;
    cout << "Input the Present Value " << endl;
    
    if(choice == '1'){
        cout << "and the interest rate in %" << endl;
        cin >> pv >> i;
        n = 72/i;
    }else{
        cout << "and the number of Years " << endl;
        cin >> pv >> n;
        i = 72/n;
    }
    fv = pv * pow((1+i/100), n );
    
    //Output Process data
    cout << "Compare the rule of 72 to the exact calculation " << endl;
    cout << "The present value   = $" << pv << endl;
    cout << "The interest rate   =   " << i << "%" << endl;
    cout << "The number of years = " << n << "(yrs)" << endl;
    cout << "$" << 2 * pv << " ~ $ " << fv << endl;
    
    //Exit stage right!
    
    return 0;
}

