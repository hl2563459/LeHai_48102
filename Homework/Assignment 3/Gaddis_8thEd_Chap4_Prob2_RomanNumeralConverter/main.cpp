/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 4, 2016, 12:27 AM
 * Purpose: Display Roman numeral version
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    unsigned short a;
    
    //Input
    cout<<"Enter a number you want to display from 1 to 10 = ";    //Enter the number you want to converse
    cin>>a;
    
    //Display the output
    switch (a){
            case  1:cout<<"The Roman numeral version of that number is I   "<<endl;break;
            case  2:cout<<"The Roman numeral version of that number is II  "<<endl;break;
            case  3:cout<<"The Roman numeral version of that number is III "<<endl;break;
            case  4:cout<<"The Roman numeral version of that number is IV  "<<endl;break;
            case  5:cout<<"The Roman numeral version of that number is V   "<<endl;break;
            case  6:cout<<"The Roman numeral version of that number is VI  "<<endl;break;
            case  7:cout<<"The Roman numeral version of that number is VI  "<<endl;break;
            case  8:cout<<"The Roman numeral version of that number is VIII"<<endl;break;
            case  9:cout<<"The Roman numeral version of that number is IX  "<<endl;break;
            case 10:cout<<"The Roman numeral version of that number is X   "<<endl;break;
            default:cout<<"You have to enter a number from 1 to 10"<<endl;
    }
    
    return 0;
}

