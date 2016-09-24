/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 24, 2016, 12:13 AM
 * Purpose: Calculate male and female percentage registered in a class
 */

#include <iostream>
#include <iomanip>

const unsigned short PERCENT=100;       //Conversion percentage

using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    float male, female, student, mper, fper;
    
    //Input 
    cout<<"How many male students registered = ";
    cin>>male;
    cout<<"How many female students registered = ";
    cin>>female;
    
    //Calculate
    student=male+female;
    mper=(male/student)*PERCENT;
    fper=(female/student)*PERCENT;
    
    //Display the output
    cout<<"The number of male student is "<<male<<" students"<<endl;
    cout<<"The number of female student is "<<female<<" students"<<endl;
    cout<<"The number of students registered in the class is "<<student<<" students"<<endl;
    cout<<endl;
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"The percentage of male student is "<<mper<<"%"<<endl;
    cout<<"The percentage of female student is "<<fper<<"%"<<endl;
    
    return 0;
}

