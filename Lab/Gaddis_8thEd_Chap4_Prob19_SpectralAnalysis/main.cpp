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
    
    if     (waveLen>1e-2f) cout<<"Radio Band"<<endl;
    else if(waveLen>1e-3f) cout<<"Micro Wave Band"<<endl;
    else if(waveLen>7e-7f) cout<<"Infra-Red Band"<<endl;
    else if(waveLen>4e-7f) cout<<"Visible Band"<<endl;
    else if(waveLen>1e-8f) cout<<"Ultra-Violet Band"<<endl;
    else if(waveLen>1e-11f)cout<<"X-Ray Band"<<endl;
    else                   cout<<"Gamma-Ray Band"<<endl;
    
    return 0;
}

