/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 18, 2016, 12:30 AM
 * Purpose: Calculate the average of 5 values
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    //Declaration of Variables
    float var=0.5e1f;
    unsigned short v1=28;   //The first number
    unsigned short v2=32;   //The second number
    unsigned short v3=37;   //The third number
    unsigned short v4=24;   //The fourth number
    unsigned short v5=33;   //The fifth number
    unsigned short sum, sum1, sum2, sum3;
    float ave;
    
    //Calculate
    sum1=v1+v2;
    sum2=v1+v2+v3;
    sum3=v1+v2+v3+v4;
    sum=v1+v2+v3+v4+v5;
    ave=sum/var;
    
    //Display Output
    cout<<"Sum of first 2 numbers = "<<sum1<<endl;
    cout<<"Sum of first 3 numbers = "<<sum2<<endl;
    cout<<"Sum of first 4 numbers = "<<sum3<<endl;
    cout<<"Sum of all numbers     = "<<sum<<endl;
    cout<<"The average            = "<<ave<<endl;
    
    return 0;
}

