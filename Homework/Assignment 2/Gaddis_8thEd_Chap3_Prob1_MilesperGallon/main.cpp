/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 22, 2016, 11:33 AM
 * Purpose: Calculate miles per gallon of gas
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    float gas, miles;
    float MPG;
    
    //Input
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"The number of gallons of gas the car holds = ";
    cin>>gas;
    cout<<"The number of miles the car can be driven = ";
    cin>>miles;
    //Calculate 
    MPG=miles/gas;
    
    //Display the output
    
    cout<<"The number of gallons of gas the car holds = "<<gas<<" gallons"<<endl;
    cout<<"The number of miles the car can be driven = "<<miles<<" miles"<<endl;
    cout<<"The number of miles that the car can be driven per gallon = "<<MPG<<" miles/gallon"<<endl;
    
    
    return 0;
}

