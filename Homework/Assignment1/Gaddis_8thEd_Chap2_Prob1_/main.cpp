/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 8, 2016, 2:22 AM
 * Purpose Sum of Two Numbers
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    short int a, b, total;
    
    //Get the number of the first number
    cout<<"What is the first number = ";
    cin>> a;
    
    //Get the number of second number
    cout<<"What is the second number = ";
    cin>> b;
    
    //Calculate sum of two numbers
    total=a+b;
    
    //Display the sum
    cout<<"The sum of two numbers = "<<total<<endl;
    
    return 0;
}

