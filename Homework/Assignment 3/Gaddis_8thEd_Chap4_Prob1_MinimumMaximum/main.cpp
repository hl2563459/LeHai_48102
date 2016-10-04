/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 4, 2016, 12:15 AM
 * Purpose: Determine larger number and smaller number
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    float a, b;                         //The two number use to compare
    
    //Input
    cout<<"Enter the first number = ";  //The first number
    cin>>a;
    cout<<"Enter the second number = "; //The second number
    cin>>b;
    
    //Display the output 
    {
    if (a>b)
        cout<<"The first number is larger than the second number"<<endl;
    else if (a<b)
        cout<<"The second number is larger than the first number"<<endl;
    else 
        cout<<"The two number are equal"<<endl;

    }
    return 0;
}

