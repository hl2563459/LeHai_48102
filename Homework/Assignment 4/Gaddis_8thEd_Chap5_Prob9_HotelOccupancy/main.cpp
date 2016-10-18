/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 17, 2016, 7:04 PM
 * Purpose: Calculate the occupancy rate for a hotel
 */

#include <iostream>
#include <iomanip>

using namespace std;

const unsigned short PERCENT=100;   //Percentage rate

int main(int argc, char** argv) {

    //Declare variables
    unsigned short room=0;      //Number of room of each floor
    float troom=0;              //Total number of room of the hotel
    unsigned short floor=0;     //Number of floor
    unsigned short oroom=0;     //Number of occupancy room of each floor
    float toroom=0;             //Number of occupancy room of the hotel
    float perOc;                //Percentage of occupancy room
    
    
    //Input the values
    cout<<"How many floors the hotel has? ";
    cin>>floor;
    
    //Process
    while(floor<1)
    {
        cout<<"Error. The number of floor must be greater than 1. Re-enter the number of floor ";
        cin>>floor;
    }
    for(int counter=1; counter<=floor; counter++)
    {
        if (counter !=13)
        {
            cout<<"How many rooms the floor has? ";
            cin>>room;
            
            while (room<10)
            {
                cout<<"The number of rooms must be at least 10. Re-enter how many rooms the floor has ";
                cin>>room;
            }
            
        }
        cout<<"How many rooms are occupancy? ";
        cin>>oroom;
    
        troom +=room;
        toroom +=oroom;
    }
    
    perOc=(toroom/troom)*PERCENT;
    
    cout<<"The hotel has total floors is "<<floor<<" floors"<<endl;
    cout<<"The hotel has total rooms is "<<troom<<" Rooms"<<endl;
    cout<<"The number of occupancy room is "<<toroom<<" Rooms"<<endl;
    cout<<"The number of un-occupancy room is "<<troom-toroom<<" Rooms"<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The percentage of occupancy room "<<perOc<<" %"<<endl;
    
    return 0;
}

