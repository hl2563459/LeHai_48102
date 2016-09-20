/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on 09/20/2016, 12:017 PM
 * Purpose:  Conversion Sine, Cosine, Tangent
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables


//Program Execution Begins Here

const float PI=4*atan(1.0);     //PI
const float CNVDEGR=PI/180;


int main(int argc, char** argv) {
    //Declare all Variables Here
    float deg, radians;
    //Input or initialize values Here
    deg=5;
    radians=deg*CNVDEGR;
    
    //Output Located Here
    cout<<"[ Degrees, Radians,    Sine,   Cosine,  Tangent]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<endl;
    
    deg+=5;
    radians=deg*CNVDEGR;

    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<endl;
    
     deg+=5;
    radians=deg*CNVDEGR;
    
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<endl;
    
     deg+=5;
    radians=deg*CNVDEGR;
    
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<endl;
    
     deg+=5;
    radians=deg*CNVDEGR;
    
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<endl;
    
     deg+=5;
    radians=deg*CNVDEGR;
    
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<endl;
    
     deg+=5;
    radians=deg*CNVDEGR;
    
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<endl;
    
     deg+=5;
    radians=deg*CNVDEGR;
    
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<endl;
    
     deg+=5;
    radians=deg*CNVDEGR;
    
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<endl;
    
     deg+=5;
    radians=deg*CNVDEGR;
    
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<endl;
    
     deg+=5;
    radians=deg*CNVDEGR;
    
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<endl;
    //Exit
    
    return 0;
}

