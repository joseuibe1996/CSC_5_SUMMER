/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on July 06, 2016
 * Purpose:  Toothpick 23 game
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
    int toothpicks = 23;
    int computer_choice, human_choice;
    
    //Input data
    cout << "Lets Play the 23 game! " << endl; //intro
    
    //loop
    do{
        cout << "Between 1 and 3 toothpicks, how many will you like to take? ";
        cout << endl;
        cin >> human_choice;
        cout << "Human took : " << human_choice << " toothpicks! " << endl;
        
        toothpicks -= human_choice; // subtracts toothpicks
        
        cout << "There is " << toothpicks << " toothpicks left! ";
        cout << endl;
        
        //determines computer choice
        if(toothpicks > 4){
            computer_choice = 4 - human_choice;
            cout << "The computer took " << computer_choice << " toothpicks!"; 
            cout << endl;
            toothpicks -= computer_choice;
            cout << "There is " << toothpicks << " toothpicks left! "
             << endl;
        }else if(toothpicks == 4){
            computer_choice = 3;
            cout << "The computer took " << computer_choice << " toothpicks!";
            cout << endl;
            toothpicks -= computer_choice;
            cout << "There is " << toothpicks << " toothpicks left! ";
            cout << endl;
        }else if(toothpicks == 3){
            computer_choice = 2;
            cout << "The computer took " << computer_choice << " toothpicks!"; 
            cout << endl;
            toothpicks -= computer_choice;
            cout << "There is " << toothpicks << " toothpicks left! ";
            cout << endl;
        }else if(toothpicks == 2){
            computer_choice = 1;
            cout << "The computer took " << computer_choice << " toothpicks!"; 
            cout << endl;
            toothpicks -= computer_choice;
            cout << "There is " << toothpicks << " toothpicks left! ";
            cout << endl;
        }else if(toothpicks == 1){
            computer_choice = 1;
            cout << "The computer took " << computer_choice << " toothpick!";
            cout << endl;
            toothpicks -= computer_choice;
            cout << "There is " << toothpicks << " toothpicks left! ";
            cout << endl;
            cout << "The computer has lost! " << endl;
        }else{
            if(toothpicks == 1 && human_choice == 1)
            cout << "The game is over! "  << endl;    
            cout << "You have Lost!!!" << endl << endl;
        }
        
    }while (toothpicks > 0); //condition for loop
    
    //Process data
    
    //Output Process data
    
    //Exit stage right!
    
    return 0;
}

