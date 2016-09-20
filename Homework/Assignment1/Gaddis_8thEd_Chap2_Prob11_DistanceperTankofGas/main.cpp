/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 18, 2016, 3:16 PM
 * Purpose: Calculate the average distance a car can travel one tank of gas
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    unsigned short gas=20;         //The gasoline in gallon
    float aveT=23.5f;              //The average miles per gallon in town
    float aveH=28.9f;              //The average miles per gallon on highway
    float disT, disH;
    
    //Calculate 
    disT=gas*aveT;
    disH=gas*aveH;
    
    //Display the output
    cout<<"The number of gas in the car tank                   = "<<gas<<" Gallons"<<endl;
    cout<<"The average miles per gallon when driven in town    = "<<aveT<<" MPG"<<endl;
    cout<<"The average miles per gallon when driven on highway = "<<aveH<<" MPG"<<endl;
    cout<<"The distance the car can travel in town             = "<<disT<<" Miles"<<endl;
    cout<<"The distance the car can travel on highway          = "<<disH<<" Miles"<<endl;
    
    return 0;
}

