/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on July 14, 2016
 * Purpose:  
 */ 

//System Libraries
#include <cstdlib>   //input / output
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
#include <iomanip>   //Format Library

//User libraries. We don't have these yet

//Global constant libraries/conversions
char grid[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';

//Function Prototypes
void Display();
void Input();
void PlayerTurn();
char Win();
//Execution Begins Here!

using namespace std;


int main(){
    //Declare Variables

    //Input Data
    Display();
    while (1){
        Input();
        Display();
        if (Win() == 'X')
        {
            cout << "X wins!" << endl;
            break;
        }
        else if (Win() == 'O')
        {
            cout << "O wins!" << endl;
            break;
        }
        PlayerTurn();
       
    }
    //Output
    
    //Exit Stage Right!
    
    return 0;
}

void Display(){
    cout << "Tic-Tac-Toe " << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

void Input(){
    int a;
    cout << "Press the number of the field: ";
    cin >> a;
 
    if (a == 1)
        grid[0][0] = player;
    else if (a == 2)
        grid[0][1] = player;
    else if (a == 3)
        grid[0][2] = player;
    else if (a == 4)
        grid[1][0] = player;
    else if (a == 5)
        grid[1][1] = player;
    else if (a == 6)
        grid[1][2] = player;
    else if (a == 7)
        grid[2][0] = player;
    else if (a == 8)
        grid[2][1] = player;
    else if (a == 9)
        grid[2][2] = player;
}

void PlayerTurn(){
    if (player == 'X'){
        player = 'O';
        cout << "Player Os turn " << endl;
    }else{
        player = 'X';
        cout << "Player Xs turn " << endl;
    }
}

char Win(){
    //first player
    if (grid[0][0] == 'X' && grid[0][1] == 'X' && grid[0][2] == 'X')
        return 'X';
    if (grid[1][0] == 'X' && grid[1][1] == 'X' && grid[1][2] == 'X')
        return 'X';
    if (grid[2][0] == 'X' && grid[2][1] == 'X' && grid[2][2] == 'X')
        return 'X';
 
    if (grid[0][0] == 'X' && grid[1][0] == 'X' && grid[2][0] == 'X')
        return 'X';
    if (grid[0][1] == 'X' && grid[1][1] == 'X' && grid[2][1] == 'X')
        return 'X';
    if (grid[0][2] == 'X' && grid[1][2] == 'X' && grid[2][2] == 'X')
        return 'X';
 
    if (grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X')
        return 'X';
    if (grid[2][0] == 'X' && grid[1][1] == 'X' && grid[0][2] == 'X')
        return 'X';
 
    //second player
    if (grid[0][0] == 'O' && grid[0][1] == 'O' && grid[0][2] == 'O')
        return 'O';
    if (grid[1][0] == 'O' && grid[1][1] == 'O' && grid[1][2] == 'O')
        return 'O';
    if (grid[2][0] == 'O' && grid[2][1] == 'O' && grid[2][2] == 'O')
        return 'O';
 
    if (grid[0][0] == 'O' && grid[1][0] == 'O' && grid[2][0] == 'O')
        return 'O';
    if (grid[0][1] == 'O' && grid[1][1] == 'O' && grid[2][1] == 'O')
        return 'O';
    if (grid[0][2] == 'O' && grid[1][2] == 'O' && grid[2][2] == 'O')
        return 'O';
 
    if (grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O')
        return 'O';
    if (grid[2][0] == 'O' && grid[1][1] == 'O' && grid[0][2] == 'O')
        return 'O';
 
    return '/';
}

    
