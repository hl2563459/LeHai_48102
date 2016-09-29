/* 
 * File:   main.cpp
 * Author: HaI Le
 * Created on September 28, 2016, 7:23 PM
 * Purpose: Word game
 */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    string name, age, city, college, prof, animal, petname;
    
    //Input
    cout<<"What is you name? ";                     //His or her name
    getline(cin, name);
    cout<<"How old are you? ";                      //His or her age
    getline(cin, age);
    cout<<"What city do you live? ";                //The name of a city
    getline(cin, city);
    cout<<"What College are you attending? ";       //The name of a college
    getline(cin, college);
    cout<<"What is your profession? ";              //A profession
    getline(cin, prof);
    cout<<"What is your favorite animal? ";         //A type of animal
    getline(cin, animal);
    cout<<"What is your pet name? ";                //A pet's name
    getline(cin, petname);
    
    //Display the out put
    cout<<endl;
    cout<<"There one was a person named "<<name<<" who lived in "<<city<<" . At the age of "<<age<<" , "<<name<<"went to college at "<<college
            <<" . "<<name<<" graduated and went to work as a "<<prof<<". Then, "<<name<<" adopted a(n) "<<animal<<" named "<<petname<<
            " . They both lived happily ever after!"<<endl;
    
    return 0;
}

