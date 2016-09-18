/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 18, 2016, 1:22 AM
 * Purpose: Calculate the total purchase
 */

#include <iostream>

using namespace std;

const char PERCENT=100;

int main(int argc, char** argv) {
    
    //Declare variables
    float item1=15.95f;     //The price of first item in $'s
    float item2=24.95f;     //The price of second item in $'s
    float item3=6.95f;      //The price of third item in $'s
    float item4=12.95f;     //The price of fourth item in $'s
    float item5=3.95f;      //The price of fifth item in $'s
    unsigned short tax=7;   //The tax rate
    float totalS, sTax, total;
    
    //Calculate
    totalS=item1+item2+item3+item4+item5;
    sTax=totalS*tax/PERCENT;
    total=totalS+sTax;
    
    //Display Output
    cout<<"Price of item 1 = $"<<item1<<endl;
    cout<<"Price of item 2 = $"<<item2<<endl;
    cout<<"Price of item 3 = $"<<item3<<endl;
    cout<<"Price of item 4 = $"<<item4<<endl;
    cout<<"Price of item 5 = $"<<item5<<endl;
    cout<<"The total of sales without tax = $"<<totalS<<endl;
    cout<<"The tax rate = "<<tax<<"%"<<endl;
    cout<<"The amount of tax = $"<<sTax<<endl;
    cout<<"The total amount = $"<<total<<endl;
    
    return 0;
}

