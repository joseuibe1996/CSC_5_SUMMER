/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on July 07, 2016
 * Purpose: Convert a number to Roman Numerals - added comment example 
 *         : and added spaces because thats how i like my code
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
    unsigned short x;                   //Number to convert
    unsigned char n1000s, n100s, n10s, n1s;//Strip off the digits
    
    //Input data
    cout << "Input a number from 1000 to 3000 to convert " << endl;
    cout << "to a Roman Numeral" << endl;
    cin >> x;
    
    //Process data
    if(x < 1000 || x > 3000) return 1; //doesnt run program if x doesn't satisfy 
    
    //Output the processed Data
    //Thousand Position
    n1000s = (x - x % 1000) / 1000; //Example (2100-2100%1000)/1000
    switch(n1000s){                 //          2100 - 100 / 1000
        case 3 : cout << "M";       //             2000 / 1000 
        case 2 : cout << "M";       //                 2 outputs 2 MM
        case 1 : cout << "M";
    }
 
    //Hundreds Position
    x -= n1000s * 1000;                  //             x = 2 * 1000 - 2100
    n100s = (x - x % 100) / 100;         //                  2000 - 2100
    switch(n100s){                       //                      x = 100
        case 9 : cout << "CM"; break;    // ----------------------------------
        case 8 : cout << "DCCC"; break;  //   n100s = ( 100 - 100 % 100 ) / 100
        case 7 : cout << "DCC"; break;   //              100 - 0 / 100
        case 6 : cout << "DC"; break;    //                100 / 100
        case 5 : cout << "D"; break;     //       n100s = 1  outputs C
        case 4 : cout << "CD"; break;
        case 3 : cout << "C";
        case 2 : cout << "C";
        case 1 : cout << "C";
    }
    
    //Tens Position
    x -= n100s * 100;
    n10s = (x - x % 10) / 10;
    switch(n10s){
        case 9 : cout << "XC"; break;
        case 8 : cout << "LXXX"; break;
        case 7 : cout << "LXX"; break;
        case 6 : cout << "LX"; break;
        case 5 : cout << "L"; break;
        case 4 : cout << "XL"; break;
        case 3 : cout << "X";
        case 2 : cout << "X";
        case 1 : cout << "X";
    }
    
    //Tens Position
    x -= n10s * 10;
    n1s =(x - x % 1) / 1;
    switch(n1s){
        case 9 : cout << "IX"; break;
        case 8 : cout << "VIII"; break;
        case 7 : cout << "VII"; break;
        case 6 : cout << "VI"; break;
        case 5 : cout << "V"; break;
        case 4 : cout << "IV"; break;
        case 3 : cout << "I";
        case 2 : cout << "I";
        case 1 : cout << "I";
    }
    //Output Process data
    
    //Exit stage right!
    
    return 0;
}

