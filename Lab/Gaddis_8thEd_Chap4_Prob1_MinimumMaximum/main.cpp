/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 29, 2016, 12:23 PM
 * Purpose: Determine smaller number and larger number
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    float a, b;
    
    cout<<"The first number = ";
    cin>>a;
    cout<<"The second number = ";
    cin>>b;
    
    if (a>b)cout<<"The first number is larger than the second number"<<endl;
    else if(a<b)cout<<"The second number is larger than the first number"<<endl;
    else cout<<"The two number are equal"<<endl;
    
    
    return 0;
}

