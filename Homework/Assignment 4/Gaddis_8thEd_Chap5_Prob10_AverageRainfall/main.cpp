/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 17, 2016, 9:59 PM
 * Purpose: Calculate the average rainfall
 */

#include <iostream>
#include <iomanip>

using namespace std;

const unsigned short MONTH=12;      //Number of month in a year

int main(int argc, char** argv) {

    //Declare variables
    unsigned short year;            //Number of year
    unsigned short tmonth;          //Number of month
    float rFall;                    //Amount of rain fall for each month
    float trFall;                   //Total amount of rainfall
    float arFall;                   //Average amount of rainfall
    
    //Input the values
    cout<<"How many years you want to calculate? ";
    cin>>year;
    
    //Process
    while(year<1)
    {
        cout<<"Number of year must be at least 1. Re-enter the number of year ";
        cin>>year;
    }
    for(int counter1=1; counter1<=year; counter1++)
    {
        for(int month=1; month<=MONTH; month++)
        {
            cout<<"Enter the amount of rainfall for "<<month<<" months"<<endl;
            cin>>rFall;
            
            while (rFall<0)
            {
                cout<<"The amount of rainfall must be greater then 0. Re-enter the amount of rainfall";
                cin>>rFall;
            }
            trFall= trFall+rFall;
            
        }
    
    }
    //Calculation 
    tmonth=year*MONTH;
    arFall=trFall/tmonth;
    
    //Display the output
    cout<<"The number of year "<<year<<" Years"<<endl;
    cout<<"The number of month "<<tmonth<<" Months"<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The total amount of rain in inches "<<trFall<<" Inches"<<endl;
    cout<<"The average rainfall "<<arFall<<" Inches"<<endl;
    
    return 0;
}