/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 5, 2016, 1:23 PM
 * Purpose: Calculate time
 */

#include <iostream>
#include <iomanip>

using namespace std;

const unsigned short MINUTE=60,         //Conversion from second to minute
                     HOUR=3600;         //Conversion from minute to hour
const unsigned int DAY=86400,           //Conversion from hour to day
                   YEAR=31536000;       ////Conversion from day to year


int main(int argc, char** argv) {

    //Declare variables
    float sec;              //Seconds
    float min;              //Minutes
    float hour;             //Hours
    float day;              //Days
    float year;             //Years
    
    //Input
    cout<<"Enter the number of seconds = ";
    cin>>sec;
    cout<<endl;
    
    //Calculate the time
    min=sec/MINUTE;
    hour=sec/HOUR;
    day=sec/DAY;
    year=sec/YEAR;
    
    //Display the output
    cout<<fixed<<showpoint<<setprecision(113);
    {
        if (sec>=0 && sec<MINUTE)
            cout<<"The number of seconds is "<<sec<<" Seconds"<<endl;
        else if(sec>=MINUTE && sec<HOUR)
            cout<<"The number of minutes is "<<min<<" Minutes"<<endl;
        else if (sec>=HOUR && sec<DAY)
            cout<<"The number of hours is "<<hour<<" Hours"<<endl;
        else if (sec>=DAY && sec<YEAR)
            cout<<"The number of days is "<<day<<" Days"<<endl;
        else if (sec>=YEAR)
            cout<<"The number of years is "<<year<<" Years"<<endl;
        else cout<<"It is not a time !"<<
                "Run the program again and renter the time"<<endl;
    }
    
    return 0;
}

