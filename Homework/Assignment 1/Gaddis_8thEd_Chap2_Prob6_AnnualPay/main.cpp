/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 18, 2016, 1:00 AM
 * Purpose: Calculate the annual pay
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //Declaration of Variables
    unsigned short payAmount=2200;  //The amount of pay each period in $'s
    unsigned short payPeriods= 26;  //The number of pay periods
    unsigned short annualPay;       //The employee's total annual pay in $'s
    
    //Calculate
    annualPay= payAmount*payPeriods;
    
    //Display the output
    cout<<"The amount of pay each period       = $"<<payAmount<<endl;
    cout<<"The number of pay periods in a year = "<<payPeriods<<endl;
    cout<<"The total annual pay                = $"<<annualPay<<endl;
    
    return 0;
}

