/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 28, 2016, 5:34 PM
 * Purpose: Calculate 
 */

#include <iostream>
#include <iomanip>

using namespace std;

const unsigned short PERCENT=100;

int main(int argc, char** argv) {

    //Declare variables
    float recost;               //Replacement cost in $'s
    unsigned short per=80;      //The percent amount at least of replacement amount would cost
    float ins;                  //The minimum amount of insurance he/she should buy
    
    //Input the replacement amount
    cout<<"The placement cost of the building = ";
    cin>>recost;
    
    //Calculate the minimum amount of insurance
    ins=recost*per/PERCENT;
    
    //Display the output
    cout<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The amount of replacement is $"<<recost<<endl;
    cout<<"The percent at least of amount it would cost is "<<per<<"%"<<endl;
    cout<<"The minimum amount of insurance he/she should buy is $"<<ins<<endl;
    
    
    return 0;
}

