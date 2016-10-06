/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 5, 2016, 1:04 AM
 * Purpose: Calculate the mass and weight of an object
 */

#include <iostream>
#include <iomanip>

using namespace std;

const float GRAVITY=9.8f;   //Standard gravity of Earth

int main(int argc, char** argv) {

    //Declare variables
    float mass;             //An object's mass in kilograms
    float weight;           //An object's weight in new-tons
    
    //Input
    cout<<"Enter the object's mass = ";
    cin>>mass;
    cout<<endl;
    
    //Calculate to change it weight in kilogram
    weight=mass*GRAVITY;
    
    //Display the output
    cout<<fixed<<showpoint<<setprecision(4);
    cout<<"The object's mass   = "<<mass<<" Kilograms"<<endl;
    cout<<"The object's weight = "<<weight<<" Newtons"<<endl;
    
    {
        if (weight > 1000)
            cout<<"The object is too heavy"<<endl;
        else if (weight < 10)
            cout<<"The object is too light"<<endl;
    }
    
    return 0;
}

