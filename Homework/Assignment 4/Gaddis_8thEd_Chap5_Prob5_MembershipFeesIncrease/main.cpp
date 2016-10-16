/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 15, 2016, 2:54 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

const unsigned short PERCENT=100;   //Percentage rate

int main(int argc, char** argv) {

    //Declare variables
    float cCharge=2500.00f;         //The club's current charge per year in $'s
    unsigned short per=4;           //Percent charge increase each year
    unsigned short year=6;          //Time in years
    
    //Process
    for(int counter=1; counter<=year; counter++)
    {
        cout<<fixed<<showpoint<<setprecision(2);
        cCharge=cCharge+(cCharge*per/PERCENT);
        cout<<"The membership fees increase every year after 6 years $"<<cCharge<<endl;
    }
    
    
    return 0;
}

