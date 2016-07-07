/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on July 07, 2016
 * Purpose:  Black Jack Hand - fixed to my style 
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
    char card;
    int value = 0, excess = 0; // excess prevents from going over 21
    
    //Input Data
    cout << "Input a card A,T,J,Q,K,2-9" << endl;
    cin >> card;
    
    //Evaluate the first card
    switch(card){
        case 'K':
        case 'Q':
        case 'J':
        case 'T': value += 10; break;
        case '9':
        case '8':
        case '7':
        case '6':
        case '5':
        case '4':
        case '3':
        case '2': value += (card - 48); break;
        case 'A': value += 11; excess = 10;
    }
 
    //Output the value
    cout << "The value of the hand at this point = " << value << endl;
    
    //Input Data for the second card
    cout << "Input a card A,T,J,Q,K,2-9" << endl;
    cin >> card;
    
    //Evaluate the second card
    switch(card){
        case 'K':
        case 'Q':
        case 'J':
        case 'T': value += 10; break;
        case '9':
        case '8':
        case '7':
        case '6':
        case '5':
        case '4':
        case '3':
        case '2': value += (card - 48); break;
        case 'A': value += 11; excess = 10;
    }
    if(value > 21) value -= excess;
 
    //Output the value
    cout << "The value of the hand at this point = " << value << endl;
    
    //Input Data for the second card
    cout << "Input a card A,T,J,Q,K,2-9" << endl;
    cin >> card;
    
    //Evaluate the second card
    switch(card){
        case 'K':
        case 'Q':
        case 'J':
        case 'T': value += 10; break;
        case '9':
        case '8':
        case '7':
        case '6':
        case '5':
        case '4':
        case '3':
        case '2': value += (card - 48); break;
        case 'A': value += 11; excess = 10;
    }
    if(value > 21) value -= excess;
 
    //Output the value
    cout << "The value of the hand at this point = " << value << endl;
    
    //Exit stage right!
    
    return 0;
}

