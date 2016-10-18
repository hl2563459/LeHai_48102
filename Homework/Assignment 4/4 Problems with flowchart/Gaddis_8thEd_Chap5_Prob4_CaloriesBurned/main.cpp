/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 15, 2016, 2:29 PM
 * Purpose: Calculate calories burned
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    float burn=3.6f;        //Calories burned per minute
    float tBurn;            //Total calories burned
    unsigned short time=30; //Time in minutes
    
    //Process
    for(short counter=5; counter<=time; counter +=5)
    {
        tBurn=burn*counter;
        cout<<"The total calories burned every 5 minutes after 30 minutes is "<<tBurn<<" Calories"<<endl;
    }
    return 0;
}

