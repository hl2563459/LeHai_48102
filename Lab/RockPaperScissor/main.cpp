/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 6, 2016, 12:26 PM
 * Purpose: Play Rock Paper Scissor
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
            
    //Declare variables
    char computr;           //Computers choice
    char rPlay;             //Our rock/paper/scissor
    //Input
    computr=rand()%4+80;
    while(computr=='Q'){
        computr=rand()%4+80;
    }
    
    //Input our rock, paper, scissor
    cout<<"Input your choice R-Rock, P-Paper, S-Scissor"<<endl;
    cin>>rPlay;
    switch(rPlay){
        case 'r':
        case 'R':rPlay='R';break;
        case 's':
        case 'S':rPlay='S';break;
        default:rPlay='P';break;
    }
           
    
    //Display
    cout<<"The computer generate a "<<computr<<endl;
    cout<<"The player type in a    "<<rPlay<<endl;
    
    //Determine the winer and display
    if(computr==rPlay){
        cout<<"You both tied each other"<<endl;
    }else if(computr=='P'){
        if(rPlay=='S')cout<<"The player wins"<<endl;
        else cout<<"The computer wins"<<endl;
    }else if(computr=='S'){
        if(rPlay=='R')cout<<"The player wins"<<endl;
        else cout<<"The computer wins"<<endl;
    }else{
        if(rPlay=='P')cout<<"The player wins"<<endl;
        else cout<<"The computer wins"<<endl;
    }
    
    
    return 0;
}

