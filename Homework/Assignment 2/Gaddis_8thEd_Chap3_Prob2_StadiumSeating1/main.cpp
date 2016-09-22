/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 22, 2016, 12:28 PM
 * Purpose: Calculate the seats cost for A, B, C classes
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    
    //Declare variables
    float a=15, b=12, c=9;      //The seats cost in $'s
    unsigned short at, bt, ct;  //Number of tickets for A, B, C classes
    float ac, bc, cc;           //The amount money would charge for A, B, C classes
    
    //Input
    cout<<"How many tickets were sold for class A = ";
    cin>>at;
    cout<<"How many tickets were sold for class B = ";
    cin>>bt;
    cout<<"How many tickets were sold for class C = ";
    cin>>ct;
    
    //Calculate
    ac=a*at;
    bc=b*bt;
    cc=c*ct;
    
    //Display the output
    cout<<fixed<<setprecision(2);
    cout<<"The amount of money charge for class A = $"<<ac<<endl;
    cout<<"The amount of money charge for class B = $"<<bc<<endl;
    cout<<"The amount of money charge for class C = $"<<cc<<endl;
    
    
    return 0;
}


