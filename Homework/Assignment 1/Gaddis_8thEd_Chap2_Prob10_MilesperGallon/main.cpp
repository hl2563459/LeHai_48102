/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 18, 2016, 1:58 AM
 * Purpose: Calculate miles per gallon
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    //Declare variables
    unsigned short gas=15;      //The number of gasoline in gallons
    unsigned short mile=375;    //The number of distance traveled in miles 
    unsigned short MPG;         //The number of distance traveled per gallon
    
    //Calculate
    MPG=mile/gas;
    
    //Display the output
    cout<<"The gasoline in the car          = "<<gas<<" gallons"<<endl;
    cout<<"The distance traveled            = "<<mile<<" miles"<<endl;
    cout<<"The distance traveled per gallon = "<<MPG<<" miles/gallon"<<endl;
    
    return 0;
}

