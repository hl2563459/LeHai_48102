/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 15, 2016, 8:08 PM
 * Purpose: addition, subtraction, multiplication, or division game
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    unsigned short menu;
    //Loop user exits
    do
    {
        //Prompt problem for user input
        cout<<"1.  Type 1  for Addition"<<endl;         //Addition game
        cout<<"2.  Type 2  for Subtraction"<<endl;      //Subtraction game
        cout<<"3.  Type 3  for Multiplication"<<endl;   //Multiplication game 
        cout<<"4.  Type 4  for Division"<<endl;         //Division game
        cin>>menu;
    
    switch(menu){
        case 1:{
            unsigned short num1, num2, result, answer;  //First number, second number, result, and answer
            //Input values
            num1=rand()%900+100;                        //3 digit random number
            num2=rand()%900+100;                        //3 digit random number

            cout<<"Addition game"<<endl;
            //Calculation
            result=num1+num2;
            
            //Display the output
            cout<<"Solve the addition problem"<<endl;
            cout<<"   "<<num1<<endl;
            cout<<" + "<<"   "<<endl;
            cout<<"   "<<num2<<endl;
            cout<<" ------------"<<endl;
            
            //Ask for the answer
            cout<<"What is the answer?"<<endl;
            cin>>answer;
            cout<<endl;
            
            //Determine if correct or not
            cout<<"What is the answer: "<<(result==answer?"Correct":"Incorrect")<<endl;
            cout<<"The answer was "<<result<<endl;
            break;
                }
        
        case 2:{
            unsigned short num1, num2, result, answer;  //First number, second number, result, and answer
            //Input values
            num1=rand()%900+100;                        //3 digit random number
            num2=rand()%900+100;                        //3 digit random number

            cout<<"Subtraction game"<<endl;
            //Calculation
            result=num1-num2;
            
            //Display the output
            cout<<"Solve the subtraction problem"<<endl;
            cout<<"   "<<num1<<endl;
            cout<<" - "<<"   "<<endl;
            cout<<"   "<<num2<<endl;
            cout<<" ------------"<<endl;
            
            //Ask for the answer
            cout<<"What is the answer?"<<endl;
            cin>>answer;
            cout<<endl;
            
            //Determine if correct or not
            cout<<"What is the answer: "<<(result==answer?"Correct":"Incorrect")<<endl;
            cout<<"The answer was "<<result<<endl;
            break;
                }
        case 3:{
            unsigned int num1, num2, result, answer;  //First number, second number, result, and answer
            //Input values
            num1=rand()%900+100;                        //3 digit random number
            num2=rand()%900+100;                        //3 digit random number

            cout<<"Multiplication game"<<endl;
            //Calculation
            result=num1*num2;
            
            //Display the output
            cout<<"Solve the multiplication problem"<<endl;
            cout<<"   "<<num1<<endl;
            cout<<" * "<<"   "<<endl;
            cout<<"   "<<num2<<endl;
            cout<<" ------------"<<endl;
            
            //Ask for the answer
            cout<<"What is the answer?"<<endl;
            cin>>answer;
            cout<<endl;
            
            //Determine if correct or not
            cout<<"What is the answer: "<<(result==answer?"Correct":"Incorrect")<<endl;
            cout<<"The answer was "<<result<<endl;
            break;
                }
        case 4:{
            float num1, num2;           //Two random numbers
            float result, answer;       //The result and answer
            //Input values
            num1=rand()%900+100;                        //3 digit random number
            num2=rand()%900+100;                        //3 digit random number

            cout<<"Division game"<<endl;
            //Calculation
            result=num1/num2;
            
            //Display the output
            cout<<"Solve the division problem"<<endl;
            cout<<"   "<<num1<<endl;
            cout<<" / "<<"   "<<endl;
            cout<<"   "<<num2<<endl;
            cout<<" ------------"<<endl;
            
            //Ask for the answer
            cout<<fixed<<showpoint<<setprecision(2);
            cout<<"What is the answer?"<<endl;
            cout<<"Round the answer to 2 decimal places"<<endl;
            cin>>answer;
            cout<<endl;
            
            //Determine if correct or not
            cout<<"What is the answer: "<<(result==answer?"Correct":"Incorrect")<<endl;
            cout<<"The answer was "<<result<<endl;
            break;
                }
        }
    }while(menu>0 && menu<10);
    
    return 0;
}