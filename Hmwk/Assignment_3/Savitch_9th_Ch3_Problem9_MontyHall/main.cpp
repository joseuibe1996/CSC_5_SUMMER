/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on July 0, 2016
 * Purpose:  Monthly Hall Game Show
 */ 

//System Libraries
#include <cstdlib> // input/output library 
#include <iostream> // random number gen 
#include <ctime> //time function 
using namespace std; //namespace of the system libraries

//User libraries. We don't have these yet

//Global constant libraries/conversions

//Function Prototypes 

//Execution 


int main(int argc, char** argv) 
{
    // set the random number seed
    srand(static_cast<unsigned int>(time(0)));
            
    //Declare Variable
    int nplay, nwin = 0, nLose = 0;
    
    //Input data
    cout << "How many Price is right games to play? " << endl;
    cin >> nplay;
    
    //Process data
    for(int game = 1; game <= nplay; game++){
        int przDoor = rand() % 3 + 1; // #1 - 3
        int ourDoor = rand() % 3 + 1; // #1 - 3
        int opnDoor;
        do{
            opnDoor = rand() % 3 + 1; // #1 - 3
        }while(opnDoor == przDoor || opnDoor == ourDoor);
        if(przDoor == ourDoor)nwin++;
        else nLose++;
    }
    
    //Output Process data
    cout << "By staying I win " << 100.0f* nwin/nplay << "%" << endl;
    cout << "By Changeing I win " << 100.0f* nLose/nplay << "%" << endl;
    //Exit stage right!
    
    return 0;
}

