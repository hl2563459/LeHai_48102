/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 4, 2016, 2:20 AM
 * Purpose: Calculate and display a person's body mass index
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main(int argc, char** argv) {

    //Declare variables
    float wei;          //The person's weight in pounds
    float hei;          //The person's height in inches
    float BMI;          //The person's body mass index
    
    //Input
    cout<<"How is the person's weight? ";
    cin>>wei;
    cout<<"How is the person's height? ";
    cin>>hei;
    cout<<endl;
    
    //Calculate the person's body mass index
    BMI=wei*(703/pow(hei,2));
    
    //Display the output
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"The person's weight = "<<wei<<" pounds"<<endl;
    cout<<"The person's height = "<<hei<<" inches"<<endl;
    cout<<"The person's body mass index = "<<BMI<<endl;
    
    {
        if (18.5<=BMI && BMI<=25)
            cout<<"The person has optimal weight"<<endl;
        else if (BMI<18.5)
            cout<<"The person has underweight"<<endl;
        else cout<<"The person has overweight"<<endl;
    }
    
    return 0;
}

