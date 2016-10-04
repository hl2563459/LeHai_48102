/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 17, 2016, 1:23 AM
 * Purpose: Calculate sum of two numbers
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    unsigned short numb1, numb2, total;
    
    //Input
    cout<<"The first number =  ";
    cin>>numb1;
    
    cout<<"The second number = ";
    cin>>numb2;
    
    //Calculate sum of two numbers
    total= numb1 + numb2;
    
    //Display 
    cout<<"The total of two numbers = "<<total<<endl;
   
    return 0;
}

