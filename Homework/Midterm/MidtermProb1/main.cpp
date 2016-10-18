/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 18, 2016, 10:59 AM
 * Purpose: Make a "X" 
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    unsigned short num;
    char x=' ';
    //Input the values
    cout<<"Enter a number from 1 to 50 ";
    cin>>num;
    
    while(num>0 && 50<num)
    {
        cout<<"You must enter a number from 1 to 50. Re-enter a number from 1 to 50 ";
        cin>>num;
    }
    for(int counter=1; counter<=num; counter++)
    {
        cout<<counter<<x<<counter<<endl;
        
    }
    
    return 0;
}

