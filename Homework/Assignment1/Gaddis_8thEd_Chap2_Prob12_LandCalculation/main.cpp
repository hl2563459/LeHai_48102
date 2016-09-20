/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 18, 2016, 3:49 PM
 * Purpose: Calculate the number in a tract of land
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    float acre=4.356e4f;        //The measure of one acre in square feet
    float tract=391876;      //The measure of the tract in square feet
    float nAcre;                    //The number of acre in the tract in acres
    
    //Calculate
    nAcre=tract/acre;
    
    //Display the output
    cout<<"The measure of one acre of land  = "<<acre<<" Square feet"<<endl;
    cout<<"The measure of the tract of land ="<<tract<<" Square feet"<<endl;
    cout<<"The number of acres in the tract = "<<nAcre<<" Acres"<<endl;
    
    return 0;
}

