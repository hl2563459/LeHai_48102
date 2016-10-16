/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 13, 2016, 3:30 AM
 * Purpose: Display character for the ASCII codes
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    char letter;    
    
    //Process 
    
    letter=0;
    for (short counter=0; counter<=127; counter++)
    {
        cout<<letter<<endl;
        letter++;
    }
    
    return 0;
}

