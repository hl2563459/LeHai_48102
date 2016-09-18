/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 17, 2016, 1:56 AM
 * Purpose: Predict sales generate
 */

#include <iostream>

using namespace std;

const char PERCENT=100; //Conversion to percentage

int main(int argc, char** argv) {
    //Declare variables
    float sales=8.6f;       //Number of sales in millions $'s
    unsigned short per=58;  //Generate percent
    float gen;              //Generate total the year in million $'s
    
    //Calculate the generate
    gen=sales*per/PERCENT;
    
    //Display
    cout<<"The number of sales in this year = $"<<sales<<" Millions"<<endl;
    cout<<"The percent of generate is "<<per<<"%"<<endl;
    cout<<"The total generate of the company = $"<<gen<<" Millions"<<endl;
    
    
    return 0;
}

