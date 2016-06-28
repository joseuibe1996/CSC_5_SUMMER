/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on June 27, 2016
 * Purpose:  Truth table
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
    bool x,y;
    
    //Input Data
    
    //Process the Data
    
    //Output the processed Data
    //The Heading
    cout << "The Truth Table" << endl;
    cout << "X Y !X !Y X||Y X&&Y X^Y X^Y^Y X^Y^X !(X||Y) !X&&!Y ";
    cout << "!(X&&Y) !X||!Y" << endl;
    
    //First Row
    x = true;y = true;
    cout << (x? 'T' : 'F') << " ";
    cout << (y? 'T' : 'F') << "  ";
    cout << (!x? 'T' : 'F') << "  ";
    cout << (!y? 'T' : 'F') << "   ";
    cout << (x || y? 'T' : 'F') << "  ";
    cout << (x && y? 'T' : 'F') << "  ";
    cout << endl;
    
    //Second Row
    x=true;y=false;
    cout << (x? 'T' : 'F') << " ";
    cout << (y? 'T' : 'F') << "  ";
    cout << (!x? 'T' : 'F') << "  ";
    cout << (!y? 'T' : 'F') << "   ";
    cout << (x || y? 'T' : 'F') << "    ";
    cout << endl;
    
    //Exit Stage Right!
    return 0;
}

