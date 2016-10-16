/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 15, 2016, 5:27 PM
 * Purpose: Calculate the salary
 */

#include <iostream>
#include <iomanip>

using namespace std;

const unsigned short DOLLAR=100;    //Penny to dollar conversion

int main(int argc, char** argv) {

    //Declare variables
    unsigned int day;                   //The time period in days
    float amount, dollar;               //The amount of pay in $'s
    float penny=1;                      //The payment start
    
    dollar=penny/DOLLAR;
    
    //Input the values
    cout<<"How many days the worker worked? ";
    cin>>day;
    while(day<1)
    {
        cout<<"Error. The number of days must be greater than 1"<<endl;
        cout<<"Renter how many days the worker worked"<<endl;
        cin>>day;
    }
    
    //Display the output
    cout<<"Payment Table By Day"<<endl;
    cout<<"-------------------------"<<endl;
    
    //Process
    cout<<fixed<<showpoint<<setprecision(2);
    for(int counter=1; counter<=day; counter++)
        {
        cout<<counter<<"          $"<<dollar<<endl;
        dollar=dollar*2;
        }
        
    return 0;
}

