/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 15, 2016, 3:55 PM
 * Purpose: Calculate distance traveled
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    float speed;        //Speed of a vehicle in miles per hour
    float time;         //Time traveled of the vehicle
    float dis;          //Distance traveled by the vehicle
    
    //Input the values
    cout<<"What is the speed of the vehicle in mph? ";
    cin>>speed;
    while (speed<0)
    {
        cout<<"Error. Renter the speed of the vehicle"<<endl;
        cin>>speed;
    }
    
    cout<<"How many hour has it traveled? ";
    cin>>time;
    while (time<1)
    {
        cout<<"Error. Renter the hours has it traveled"<<endl;
        cin>>time;
    }
    cout<<"Hour Distance Traveled"<<endl;
    cout<<"--------------------------"<<endl;
    
    //Process
    for(int counter=1; counter<=time; counter++)
        {
            dis=speed*counter;
            cout<<counter<<"           "<<dis<<endl;
        }
    
    return 0;
}

