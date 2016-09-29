/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 28, 2016, 8:00 PM
 * Purpose: Calculate stock transaction
 */

#include <iostream>
#include <iomanip>

using namespace std;

const unsigned short PERCENT=100;

int main(int argc, char** argv) {

    //Declare variables
    unsigned short share=1000;          //The number of shares that Joe purchased
    float bprice=45.50f;                //The amount of money Joe paid for per share in $'s
    unsigned short percomm=2;           //The commission for stockbroker
    float sprice=56.90f;                //The amount of money Joe sold for per share in $'s
    float paid, bcomm, sold, scomm,
            profit, totPaid, totSold;
    
    //Calculation
    paid=share*bprice;                  //The amount Joe paid for his stock
    bcomm=paid*percomm/PERCENT;         //The commission when he bought his stock
    totPaid=paid+bcomm;                 //The total mount Joe paid included commission for his broker
    sold=share*sprice;                  //The amount Joe sold for his stock
    scomm=sold*percomm/PERCENT;         //The commission when he sold his stock
    totSold=sold-scomm;                 //The total mount Joe sold his stock and paid for his broker
    profit=totSold-totPaid;             //The total profit Joe gets after transaction
    
    //Display the output
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The price Joe paid for each stock is $"<<bprice<<endl;
    cout<<"The amount of money Joe paid for the stock is $"<<paid<<endl;
    cout<<"The amount of commission Joe paid for stock broker when he bought the stock is $"<<bcomm<<endl;
    cout<<"The price Joe sold for each stock is $"<<sprice<<endl;
    cout<<"The amount of money Joe sold the stock is $"<<sold<<endl;
    cout<<"The amount of commission Joe paid for stock broker when he sold the stock is $"<<bcomm<<endl;
    cout<<"The amount of profit that Joe made after selling his stock and "
            "paying for two commissions to his broker is $"<<profit<<endl;
     
    return 0;
}

