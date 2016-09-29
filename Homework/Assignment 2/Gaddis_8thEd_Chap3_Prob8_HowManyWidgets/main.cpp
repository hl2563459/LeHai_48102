/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 25, 2016, 1:30 AM
 * Purpose: Calculate the widgets stack on a pallet 
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    //Declare variables
    float wid=12.5f;        //Weigh of a widget in pounds
    float nwid, weigh, pal, wwid;
    
    //Input
    cout<<"How much the pallet weigh by itself =";
    cin>>pal;
    cout<<"How much the pallet weigh with widgets stacked on =";
    cin>>weigh;
    
    //Calculation
    wwid=weigh-pal;
    nwid=wwid/wid;
    
    //Display
    cout<<"The pallet weigh by itself = "<<pal<<" pounds"<<endl;
    cout<<"The pallet weigh with widgets stacked on = "<<weigh<<" pounds"<<endl;
    cout<<"The weigh of widgets were stack on the pallet = "<<wwid<<" pounds"<<endl;
    cout<<"The weigh of a widget = "<<wid<<" pounds"<<endl;
    cout<<endl;
    cout<<"The number of widgets were stacked on the pallet = "<<nwid<<" Widgets"<<endl;
    
    
    return 0;
}

