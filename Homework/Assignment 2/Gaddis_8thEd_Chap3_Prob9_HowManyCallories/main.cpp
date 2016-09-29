/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 28, 2016, 5:11 PM
 * Purpose: Calculate the calories of cookies
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    //Declare variables
    unsigned short cookie=30;           //The number of cookies in a bag
    unsigned short cal=300;             //The amount of calories of a serving
    unsigned short ser=10;              //The number of serving in a bag
    unsigned short calE, totCal, ate;   //THe amount of calories in each cookie, total calories, and number of cookies she/he ate
    
    //Calculate the calories in each cookie
    calE=(cal*ser)/cookie;
    
    //Input
    cout<<"How many cookies he/she ate = ";
    cin>>ate;
    
    //Calculate the amount of calories
    totCal=calE*ate;
    
    //Display the output
    cout<<endl;
    cout<<"The amount of calories in a cookie is "<<calE<<" calories"<<endl;
    cout<<"The number of cookie he/she ate is "<<ate<<" cookies"<<endl;
    cout<<"The total amount of calories is "<<totCal<<" calories"<<endl;
    
    
    
    return 0;
}

