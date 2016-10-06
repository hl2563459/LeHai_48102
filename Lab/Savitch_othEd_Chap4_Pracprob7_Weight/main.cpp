/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 6, 2016, 11:22 AM
 * Purpose: Calculate your weight
 */

#include <iostream>

using namespace std;

float GRAVITY=6.673e-8f;        //Universal Gravity Constant cm^3/g/sec^2
float CNKGGRM=1000;             //Conversion from KG to Grams
float CNSGGRM=14593.9;          //Conversion from Slugs to Grams
float CNKMMET=1000;             //Conversion from Km to Meters
float CNMETCM=100;              //Conversion from Meters to Centimeters
float CNDYNLB=2.24809e-6f;      //Conversion from Dynes to Pounds
float CNSGLBS=32.174f;          //Conversion from slugs to lbs

int main(int argc, char** argv) {

    //Declare variables
    float msEarth=5.972e24f;    //Google lookup -> Kilograms
    float msMark=6.0f;          //Mass of Mark -> Slugs
    float rdEarth=6371.0f;      //Google radius of the earth
    float weight;               //Force of attraction from Physic
    
    //Conversion
    msEarth*=CNKGGRM;           //Convert mass of the earth to grams
    msMark*=CNSGGRM;
    rdEarth*=CNKMMET*CNMETCM;   //Convert the radius of the earth to centimeters
    
    //Calculate
    weight=GRAVITY*msMark*msEarth/rdEarth/rdEarth;  //Weak force attraction to Gravity
    weight*=CNDYNLB;        //Convert Dynes to Pounds
    
    //Display 
    cout<<"According to the Weak Force of Gravity Mark weighs = "<<weight<<" lbs"<<endl;
    cout<<"As a check Mark weighs = "<<6*CNSGLBS<<" lbs"<<endl;
    cout<<"The percentage error in the Radius of Earth = +-"<<100.0f*18/6371<<"%"<<endl;
    cout<<"The margin of error for the weight = "<<(weight-6*CNSGLBS)/weight*100.0f<<"%"<<endl;
    
    
    return 0;
}

