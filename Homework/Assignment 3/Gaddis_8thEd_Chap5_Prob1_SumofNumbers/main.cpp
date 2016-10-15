/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 11, 2016, 1:00 AM
 * Purpose: Calculate the sum of all integer numbers from 1 to a entered number
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    //Declare variables
    int num;        //The number user want to enter
    int sum;        //Sum of all number from 1 to the number was entered
    
    //Input
    cout<<"Enter the number you want to calculate the sum until ";
    cin>>num;
    
    //Process
    while (num<0)
    {
        cout<<"You must enter a positive number"<<endl;
        cin>>num;
    }
    
    for (int counter=1; num>=counter; counter++)
    {
           sum =sum+counter;
    }
        cout<<"Sum of all number from 1 to "<<num<<" is "<<sum<<endl;

   return 0;
}

