/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on September 20, 2016, 11:21 AM
 * Purpose: Iteration to find Square Root
 */

#include <iostream>     //Output objects
#include <iomanip>      //Format Library
#include <cstdlib>      //Random number
#include <cmath>        //Square root function
#include <ctime>        //Time tp set random number seed
using namespace std;

const float MAXRAND=pow(2,31)-1;    //Max signed positive value for int
int main(int argc, char* argv) {

    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare of variables
    float n, guess, r;
    float scale=90, shift=10;
    short counter=0;
    //Input values - float random number (10,100) vs
    //               integer radom number rand()%scale+shift [10,100]
    
    n=rand()/MAXRAND*scale+shift;
    guess=n/2;
    
    //Display the Initialization
    cout<<"The number to find the square root of = "<<n<<endl;
    cout<<"The initial guess = "<<guess<<endl;
    
    //First pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display output
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    cout<<"Pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    
     //First pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
 
    cout<<"Pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
     //Next pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;

    cout<<"Pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
     //Next pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    cout<<"Pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
      
     //Next pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    cout<<"Pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
     //Next pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    cout<<"Pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
     //Next pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display output
    cout<<"Pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //The answer or solution is
    cout<<"The sqrt ("<<n<<")="<<sqrt (n)<<endl;    
    
    return 0;
}

