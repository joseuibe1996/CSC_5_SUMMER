/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on July 13, 2016
 * Purpose:  Correct change
 */ 

//System Libraries
#include <cstdlib>   //input / output
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
#include <fstream> 
#include <string>

using namespace std; //namespace of the system libraries

//User libraries. We don't have these yet

//Global constant libraries/conversions

//Function Prototypes 
void input(int &);
void convrt(int, int, int &, int &, int &, int &);
void output(int, int, int, int, int);

//Execution 


int main(int argc, char** argv){
    //Declare Variable
    int change, nHalf, nQtr, nDime, nNick, nPen;
    
    //Input data
    input(change);
    
    //Process data
    convrt(change, nHalf, nQtr, nDime, nNick, nPen);
    
    //Output Process data
    output(nHalf, nQtr, nDime, nNick, nPen);
    //Exit stage right!
    
    return 0;
}

void input(int &change){
    //Declare colon
    do{
        cout << "This program converts pennies into chnage" << endl;
        cout << "Type in the 3 of pennies 1 - 99" << endl;
        cin >> change;
    }while(change <= 0 || change > 99);
        cout << change;
}

void convrt(int change,int nHalf,int &nQtr,int &nDimes,int &nNick,int&nPen){
    //convert the hour
    nHalf = (change - change % 50)/50;
    change -= nHalf*50;
    nQtr = (change - change % 25)/25;
    change -= nQtr * 25;
    nDimes = (change - change % 10)/10;
    change -= nDimes * 10;
    nNick = (change - change % 5)/5;        
    change -= nNick * 5;
    nPen = change;
}
void output(int nHalf,int nQtr,int nDimes, int nNick,int nPen){
    //output result
    cout << nHalf << " $0.50  ";
    cout << nQtr << " $0.25  ";
    cout << nDimes << " $0.10  ";
    cout << nNick << " $0.05  ";
    cout << nPen << " $0.01  " << endl; 
}
