/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 19, 2016, 1:23 AM
 * Calculate water bill
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    //Declare variables
    float w, l, h, v;           //The measure in meters
    float cost, charge, profit; //The amount of cost, charge , and profit
    float costvol=0.23f;        //The initial price in $'s
    float chargevol=0.5f;       //The sell price in $'s
    
    //Input
    cout<<"Length in meter = ";
    cin>>l;
    cout<<"Length = "<<l<<" meters"<<endl;
    cout<<"Width in meters = ";
    cin>>w;
    cout<<"Width = "<<w<<" meters"<<endl;
    cout<<"Height in meters = ";
    cin>>h;
    cout<<"Height = "<<h<<" meters"<<endl;
    //Calculate
    v=w*l*h;
    cost=v*costvol;
    charge=v*chargevol;
    profit=charge-cost;
    
    //Display
    cout<<"The length in meter    = "<<l<<" meters"<<endl;
    cout<<"The width in meter     = "<<w<<" meters"<<endl;
    cout<<"The height in meter    = "<<h<<" meters"<<endl;
    cout<<"The volume             = "<<v<<" cube meters"<<endl;
    cout<<"The cost of a volume   = $"<<costvol<<endl;
    cout<<"The amount of cost     = $"<<cost<<endl;
    cout<<"The charge of a volume = $"<<chargevol<<endl;
    cout<<"The amount of charge   = $"<<charge<<endl;
    cout<<"The amount of profit   = $"<<profit<<endl;
    
    return 0;
}

