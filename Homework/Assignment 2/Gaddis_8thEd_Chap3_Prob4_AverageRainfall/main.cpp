/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 23, 2016, 11:43 PM
 * Purpose: Calculate the average of rainfall
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const unsigned short MONTHS=3;      //The number of months

int main(int argc, char** argv) {

    //Declare variables
    float m1, m2, m3, ave;          //The amount of rainfall each month in inches
    
    string month1;                  //Name of the first month
    string month2;                  //Name of the second month
    string month3;                  //Name of the third month
    
    //Input the of months
    cout<<"What month is the first month : ";
    getline(cin, month1);
    cout<<"What month is the second month: ";
    getline(cin, month2);
    cout<<"What month is the third month : ";
    getline(cin, month3);
    
    cout<<"Amount of rainfall in "<<month1<<" = ";
    cin>>m1;
    cout<<"Amount of rainfall in "<<month2<<" = ";
    cin>>m2;
    cout<<"Amount of rainfall in "<<month3<<" = ";
    cin>>m3;
    
    //Calculation
    ave=(m1+m2+m3)/MONTHS;
    
    //Display the output
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The amount of rainfall in "<<month1<<" is "<<m1<<" inches"<<endl;
    cout<<"The amount of rainfall in "<<month2<<" is "<<m2<<" inches"<<endl;
    cout<<"The amount of rainfall in "<<month3<<" is "<<m3<<" inches"<<endl;
    cout<<endl;
    cout<<"The average rainfall for "<<month1<<", "<<month2<<", and "<<month3<<" is "<<ave<<" inches"<<endl;
    
    return 0;
}

