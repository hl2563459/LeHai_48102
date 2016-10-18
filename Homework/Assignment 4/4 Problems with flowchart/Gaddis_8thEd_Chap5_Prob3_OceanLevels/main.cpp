
/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 15, 2016, 2:07 PM
 * Purpose: Calculate the ocean's levels
 */

#include <iostream>
#include <iomanip>


using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    float rise=1.5f;        //The ocean rising per year in millimeters
    unsigned short year=25; //The time we want to calculate until in years
    float ocean=0;          //The ocean's level
    
    //Process
    for(int counter=1; counter<=year; counter++)
    {
        cout<<fixed<<showpoint<<setprecision(1);
        cout<<"The ocean's levels rising "<<ocean<<" Millimeters"<<endl;
        ocean=ocean+rise;
    }
    
    
    return 0;
}

