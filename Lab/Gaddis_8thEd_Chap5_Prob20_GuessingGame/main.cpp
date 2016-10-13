
/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 13, 2016, 12:22 PM
 * Purpose: Guess a number between 1 to 1000
 */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
    //Set the radom number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    int range, nGuess;
    int number, answer;
    
    //Input
    cout<<"This is gessing game"<<endl;
    cout<<"Choose a range for number to guess"<<endl;
    cin>>range;
    
    //Process
    nGuess=log(range)/log(2)+1;
    cout<<"You have "<<nGuess<<" Guesses to find a radom number"<<endl;
    number=rand()%(range+1);    //[0,range]
    //Display the result of each guess
    for(int guess=1; guess<=nGuess; guess++)
    {
        cout<<"Input your guess"<<endl;
        cin>>answer;
        if(answer>number)
            cout<<"Guess too high"<<endl;
        else if (answer<number)
            cout<<"Guess too low"<<endl;
        else 
        {
            cout<<"You guessed the number"<<endl;
            exit(0);
        }
    }
    cout<<"Sorry too many guesses"<<endl;
    
    return 0;
}

