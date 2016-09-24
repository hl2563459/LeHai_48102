/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 24, 2016, 12:36 AM
 * Purpose: Calculate ingredient to make cookies
 */

#include <iostream>
#include <iomanip>

using namespace std;

const unsigned short COOKIES=48;        //Conversion

int main(int argc, char** argv) {

    //Declare variables
    float sugarR=1.5;                   //The amount of sugar needed to make 48 cookies in cups
    float butterR=1;                    //The amount of butter needed to make 48 cookies in cups
    float flourR=2.75;                  //The amount of sugar needed to make 48 cookies in cups
    float sugar1, butter1, flour1;      //The amount of ingredient needed to make a cookie
    float sugar, butter, flour;         //The amount of ingredient needed to make a specific number of cookies
    unsigned short cookie;              //The number of cookies want to make
    
    //Calculation the amount of ingredient
    sugar1=sugarR/COOKIES;
    butter1=butterR/COOKIES;
    flour1=flourR/COOKIES;
    
    //Input
    cout<<"How many cookies cooker wants to make = ";
    cin>>cookie;
    cout<<endl;
    
    cout<<fixed<<showpoint<<setprecision(3);
    cout<<"The amount of  sugar to make a cookie is = "<<sugar1<<" cups of sugar"<<endl;
    cout<<"The amount of butter to make a cookie is = "<<butter1<<" cups of sugar"<<endl;
    cout<<"The amount of  flour to make a cookie is = "<<flour1<<" cups of sugar"<<endl;
    cout<<endl;
    
    //Calculation the amount needed to make a specific number of cookies
    sugar=sugar1*cookie;
    butter=butter1*cookie;
    flour=flour1*cookie;
    
    //Display the output
    cout<<"The number of cookies cooker wants to make is "<<cookie<<" cookies"<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The amount of  sugar needed to make "<<cookie<<" cookies is "<<sugar<<" cups of sugar"<<endl;
    cout<<"The amount of butter needed to make "<<cookie<<" cookies is "<<butter<<" cups of butter"<<endl;
    cout<<"The amount of  flour needed to make "<<cookie<<" cookies is "<<flour<<" cups of flour"<<endl;
    
    return 0;
}

