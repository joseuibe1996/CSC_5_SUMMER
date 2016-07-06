/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on July 05, 2016
 * Purpose:  Word Game
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
    string food, adj, color, animal, uname1, uname2; 
    int number;
    
    //Input data
    
    cout << "Hi there, I'm going to ask you a series of questions, okay? " 
         << endl << "Tell me two different names. " << endl;
    cin >> uname1;
    cin >> uname2;
    cout << "Now chose a food." << endl;
    cin >> food;
    cout << "Chose a number between 100 and 120 " << endl;
    cin >> number;
    cout << "Chose an adjective " << endl;
    cin >> adj;
    cout << "Pick a color " << endl;
    cin >> color;
    cout << "Chose an animal " << endl;
    cin >> animal;
    cout << "Thank you ! " << endl << endl;
    
    //Process data
    
    //Output Process data
    
    cout << "Dear " << uname1 << ", " << endl << endl;
    cout << "I am sorry that I am unable to turn in my homework at this "
            "time. " << endl;
    cout << "First, I ate a rotten " << food << ", which made me turn "
         << color << " and extremely ill. " << endl; 
    cout << "I came down with a fever of " << number << ". Next, my " 
         << adj << " pet " << animal << " must " << endl;
    cout << "have smelled the remains of the " << food << " on my "
            "homework, so i think he ate it. " << endl;
    cout << "I am currently rewriting my homework and hope you will "
            "accept it late." << endl << endl;
    cout << "Sincerely, " << endl;
    cout << uname2 << "." << endl << endl;
    
    //Exit stage right!
    
    return 0;
}

