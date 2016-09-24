/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 23, 2016, 11:19 PM
 * Purpose: Calculate the test score average
 */

#include <iostream>
#include <iomanip>

using namespace std;

const unsigned short TESTS=5;       //Total number of tests

int main(int argc, char** argv) {
    
    //Declare the variables
    float t1, t2, t3, t4, t5, ave;
    
    //Input
    cout<<"The score of the first test  = ";
    cin>>t1;
    cout<<"The score of the second test = ";
    cin>>t2;
    cout<<"The score of the third test  = ";
    cin>>t3;
    cout<<"The score of the fourth test = ";
    cin>>t4;
    cout<<"The score of the fifth test  = ";
    cin>>t5;
    
    //Calculation
    ave=(t1+t2+t3+t4+t5)/TESTS;
    
    //Display the output
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"The first test score  = "<<t1<<endl;
    cout<<"The second test score = "<<t2<<endl;
    cout<<"The third test score  = "<<t3<<endl;
    cout<<"The fourth test score = "<<t4<<endl;
    cout<<"The fifth test score  = "<<t5<<endl;
    cout<<endl;
    cout<<"The score average = "<<ave<<endl;
    
    return 0;
}

