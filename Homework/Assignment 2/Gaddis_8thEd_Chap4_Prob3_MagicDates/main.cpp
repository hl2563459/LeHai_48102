/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 4, 2016, 1:05 AM
 * Purpose: Determine matric dates
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    signed short date, month, year, mul;
    
    //Input
    cout<<"What is the month = ";       //The month
    cin>>month;
    cout<<"What is the date = ";        //The date
    cin>>date;
    cout<<"What is the year = ";        //The year
    cin>>year;
    
    //Calculation
    mul=month*date;     //Calculation the multiply of the month and date
    
    //Display the output
    {
        if (mul==year)
            cout<<"The date is the magic date"<<endl;
        else
            cout<<"The date is not a magic date"<<endl;
    }
  
    return 0;
}

