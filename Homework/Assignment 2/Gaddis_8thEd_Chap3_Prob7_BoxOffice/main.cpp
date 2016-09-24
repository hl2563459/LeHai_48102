/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 24, 2016, 1:16 AM
 * Purpose: Calculate a theater's gross and net box office profit for a night
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const unsigned short PERCENT=100;   //Percentage conversion

int main(int argc, char** argv) {

    //Declare variables
    string name;
    
    cout<<"What is the movie's name ";
    getline(cin, name);
    
    unsigned short ad, ch;                    //Number of adult and child's tickets were sold
    unsigned short aprice=10;                 //The cost of a adult's ticket in $'s
    unsigned short cprice=6;                  //The cost of a child's ticket in $'s
    float gross, net, dis, adAmount, chAmount;//The amount of gross and net box office profit and distributor in $'s
    unsigned short per=20;                    //Percentage of the revenue earned from ticket sales
    //Input
    cout<<"How many adult's tickets were sold = ";
    cin>>ad;
    cout<<"How many child's tickets were sold = ";
    cin>>ch;
    cout<<endl;
    
    //Calculation the amount of money
    adAmount=ad*aprice;
    chAmount=ch*cprice;
    gross=adAmount+chAmount;
    net=gross*per/PERCENT;
    dis=gross-net;
    
    //Display the output
    cout<<"Movie name:                           "<<setw(6)<<name<<endl;
    cout<<"Adult Tickets Sold:                   "<<setw(6)<<ad<<endl;
    cout<<"Child Tickets Sold:                   "<<setw(6)<<ch<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The Total Amount of Adult's Tickets: $"<<setw(8)<<adAmount<<endl;
    cout<<"The Total Amount of Child's Tickets: $"<<setw(8)<<chAmount<<endl;
    cout<<"Gross Box Office Profit:             $"<<setw(8)<<gross<<endl;
    cout<<"Net Box Office Profit:               $"<<setw(8)<<net<<endl;
    cout<<"Amount Paid to Distributor:          $"<<setw(8)<<dis<<endl;
   
            
    
    
    return 0;
}

