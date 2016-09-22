/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 17, 2016, 4:03 PM
 * Purpose: Calculate tax and tip on a restaurant bill
 */

#include <iostream>
#include <iomanip>

using namespace std;

const char PERCENT=100; //Conversion percentage

int main(int argc, char** argv) {

    float meal=88.67f;              //The meal charge
    float tax=6.75f;                //The tax rate
    unsigned short tip=20;          //The tip rate
    float charge, total, Ctax, Ctip;
    
    //Calculate the bill
    Ctax=meal*tax/PERCENT;
    charge=meal+Ctax;
    Ctip=charge*tip/PERCENT;
    total=meal+Ctax+Ctip;
    
    //Display the bill
    
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Cost of the meal = $"<<meal<<endl;
    cout<<"Charge for tax = $"<<Ctax<<endl;
    cout<<"Total charge without tip = $"<<charge<<endl;
    cout<<"Charge for tip = $"<<Ctip<<endl;
    cout<<"Total amount = $"<<total<<endl;
    
    return 0;
}

