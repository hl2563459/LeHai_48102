/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 4, 2016, 11:18 AM
 * Purpose: Determine numbers in order
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    float a, b;
    
    //Input
    cout<<"Enter the first number = ";
    cin>>a;
    cout<<"Enter the second number = ";
    cin>>b;
    
    //Display the output
    {
        if (a>=b)
            cout<<"The numbers' sort : "<<a<<", "<<b<<endl;
        else cout<<"The numbers' sort : "<<b<<", "<<a<<endl;
    }
    
    return 0;
}

