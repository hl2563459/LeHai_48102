/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 5, 2016, 6:53 PM
 * Purpose: Dollar game
 */

#include <iostream>

using namespace std;

const unsigned short PENNY=1,       //The amount of a penny
                     NICKEL=5,      //The amount of a nickel
                     DIME=10,       //The amount of a dime
                     QUARTER=25;    //The amount of a quarter


int main(int argc, char** argv) {

    //Declare variables
    unsigned short n1, n2, n3, n4;          //The number of pennies, nickels, dimes, quarters
    unsigned short a, b, c, d;              //The amount money of each kind                        
    unsigned short tot;                     //The total amount
    
    //Input
    cout<<"How many pennies? ";
    cin>>n1;
    cout<<"How many nickel? ";
    cin>>n2;
    cout<<"How many dimes? ";
    cin>>n3;
    cout<<"How many quarters? ";
    cin>>n4;
    cout<<endl;
    
    //Calculate
    a=n1*PENNY;
    b=n2*NICKEL;
    c=n3*DIME;
    d=n4*QUARTER;
    tot=a+b+c+d;
    
    //Display
    cout<<"The number of pennies is  "<<n1<<" pennies"<<endl;
    cout<<"The number of nickels is  "<<n1<<" nickels"<<endl;
    cout<<"The number of dimes is    "<<n1<<" dimes"<<endl;
    cout<<"The number of quarters is "<<n1<<" quarters"<<endl;
    {
        if (tot>100)
            cout<<"The amount is more then one dollar"<<
                    " The money was "<<tot<<" cents"<<endl;
        else if (tot<100)
            cout<<"The amount is less than one dollar"<<
                    " The money was "<<tot<<" cents"<<endl;
        else cout<<"Congratulate!"<<
                " The amount is exactly one dollar"<<endl;
    }
    
    
    
    return 0;
}

