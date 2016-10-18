/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 18, 2016, 11:36 AM
 * Purpose: Write a check
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    string Payee;
    cout<<"Enter the name of payee ";
    getline(cin, Payee);
    
    string AHolder;
    cout<<"Enter the name of receiver ";
    getline(cin, AHolder);
    
    int date, month, year;
    int amount;
    
    //Input the values
    cout<<"Enter the date you write the check in order mm/dd/yy "<<endl;
    cin>>date>>month>>year;
    cout<<"Enter the amount you want to pay in $'s ";
    cin>>amount;
    
    //Display
    cout<<Payee<<endl;
    cout<<"STREET ADDRESS"<<endl;
    cout<<"CITY, STATE, ZIP"<<"                "<<"Date: "<<month<<"/"<<date<<"/"<<year<<endl;
    cout<<"Pay to the Order of: "<<AHolder<<"  "<<" $"<<amount<<endl;
    cout<<"Number of amount in letter"<<endl;
    cout<<"BANK OF CSC5 "<<endl;
    cout<<"FOR: GOTTA PAY THE RENT"<<"         "<<Payee<<endl;
    
    
    return 0;
}

