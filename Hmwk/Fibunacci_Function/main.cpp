/* 
 * File:   main.cpp
 * Author: Jose Uribe
 * Created on July 11, 2016
 * Purpose:  Fibunnacci Function
 */ 

//System Libraries
#include <cstdlib>   //input / output
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
#include <fstream> 

using namespace std; //namespace of the system libraries

//User libraries. We don't have these yet

//Global constant libraries/conversions

//Function Prototypes 
int fibseq(int);
int fibseq2(int);

//Execution 


int main(int argc, char** argv) 
{
    //Declare Variable
    int index;
    
    //Input data
    cout << "Input the index of the Fibunacci sequence "
            "to obtain its Value " << endl;
    cin >> index;
    
    
    //Process data
    
    //Output Process data
    cout << "F (" << index << ") = " << fibseq(index) << endl;
    cout << "F (" << index << ") = " << fibseq2(index) << endl;
    
    //Exit stage right!
    
    return 0;
}
int fibseq2 (int n){
    if( n <= 0)return 0;
    if (n == 1)return 1;
    if (n == 2)return 1;
    return fibseq2 (n - 1)+ fibseq2(n - 2);
}

int fibseq(int n){
    int fim2 = 1, fim1 = 1, fi;
    
    //process sequence
    if( n <= 0)return 0;
    if(n == 1)return fim2;
    if(n == 2)return fim1;
    for(int i = 3; i <= n; i++){
        fi = fim1 + fim2;
        fim2 = fim1;
        fim1 = fi;
    }
    return fi;
}