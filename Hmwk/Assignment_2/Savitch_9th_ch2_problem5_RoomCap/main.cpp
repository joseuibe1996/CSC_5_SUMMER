/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on July  05, 2016
 * Purpose:  Room Capacity
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
    int max_room_cap, attendants, room_left, excluded;
    
    //Input data
    cout << "Hi there what is your current capacity? " << endl;
    cin >> max_room_cap;
    cout << "How many people will be attending? " << endl;
    cin >> attendants;
    
    //Process data
    room_left = max_room_cap - attendants;
    excluded = attendants - max_room_cap;
    
    //Output Process data
    if(attendants <= max_room_cap){
        cout << "Your meeting is legally being held. " << endl;
        cout << room_left << " people may still legally attend "
                "your meeting! " << endl;
    }else if (attendants > max_room_cap){
        cout << "Do to fire safety regulations, you are unable to host" << endl;
        cout << "this meeting. You currently have " << attendants << " people" 
                " attending and the capacity " << endl;
        cout << "is " << max_room_cap << ". Please exclude " << excluded 
             << " people to comply with these regulations. " << endl;
        cout << "Thank You !" << endl;
    }else{
        cout << "Something went wrong with this program! " << endl;
    }
    
    //Exit stage right!
    
    return 0;
}

