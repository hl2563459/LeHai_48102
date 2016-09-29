/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 29, 2016, 12:04 PM
 * Purpose: To determine the Band of Radio1
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    float waveLen;
    
    //Input value
    cout<<"Input the wave length of the radiation in Meters"<<endl;
    cout<<"This program determines the band of radiation"<<endl;
    cin>>waveLen;
    

    
    
  cout<<((waveLen>1e-2f)?"Radio Band":
        (waveLen>1e-3f)?"Micro Wave Band":
        (waveLen>7e-7f)?"Infra-Red Band":
        (waveLen>4e-7f)?"Visible Band":
        (waveLen>1e-8f)?"Ultra-Violet Band":
        (waveLen>1e-11f)?"X-Ray Band":"Gamma-Ray Band")<<endl;
    
    return 0;
}

