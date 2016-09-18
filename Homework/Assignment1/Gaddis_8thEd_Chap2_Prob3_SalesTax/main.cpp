/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 17, 2016, 1:13 PM
 * Purpose: Calculate sales tax
 */

#include <iostream>

using namespace std;

const char PERCENT=100;

int main(int argc, char** argv) {

    float pur=9.5e1f; //Cost of the purchase in $'s
    unsigned short sTax=4; //State sales tax in percentage 
    unsigned short cTax=2; //County sales tax in percentage
    float sst, cst, st, tt;    //State sales tax in $'s
    //Calculate the sales tax
    sst=pur*sTax/PERCENT;
    cst=pur*cTax/PERCENT;
    st=sst+cst;
    tt=pur+st;
    //Display the sales tax
    cout<<"The cost of the purchase = $"<<pur<<endl;
    cout<<"State sales tax rate = "<<sTax<<"%"<<endl;
    cout<<"State sales tax = $"<<sst<<endl;
    cout<<"County sales tax rate = "<<cTax<<"%"<<endl;
    cout<<"County sales tax = $"<<cst<<endl;
    cout<<"Sales tax = $"<<st<<endl;
    cout<<"The total = $"<<tt<<endl;
    return 0;
}

