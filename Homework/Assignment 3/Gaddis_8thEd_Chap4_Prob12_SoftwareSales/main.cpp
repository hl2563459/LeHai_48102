/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 5, 2016, 10:14 PM
 * Purpose: Calculate number total sold and discount of software
 */

#include <iostream>
#include <iomanip>

using namespace std;

const unsigned short PERCENT=100;

int main(int argc, char** argv) {

    //Declare the variables
    float re=99;                   //The price of a software in $'s
    unsigned short dis1=20,                 //The percent discount for 10-19 units
                   dis2=30,                 //The percent discount for 20-49 units
                   dis3=40,                 //The percent discount for 50-99 units
                   dis4=50,                 //The percent discount for 100 more units
                   n;                       //Number of purchase
    
    float a, cost1, cost2, cost3, cost4;
    
    //Input
    cout<<"How many softwares was sold = ";
    cin>>n;
    
    //Calculate the cost
    a=re*n;
    cost1=a-(a*dis1/PERCENT);
    cost2=a-(a*dis2/PERCENT);
    cost3=a-(a*dis3/PERCENT);
    cost4=a-(a*dis4/PERCENT);
    
    
    
    //Display the output
    {
        if (re<0 || re>10)
            cout<<"The total amount is $"<<a<<endl;
        else if (10<re && re>20)
            cout<<"The total amount is $"<<cost1<<endl;
        else if (re>=20 && re<50)
            cout<<"The total amount is $"<<cost2<<endl;
        else if (re>=50 && re<100)
            cout<<"The total amount is $"<<cost3<<endl;
        else if (re>=100)
            cout<<"The total amount is $"<<cost4<<endl;
        else cout<<"kahsf"<<endl;
    }
     

    
    
    return 0;
}

