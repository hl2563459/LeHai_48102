
/* 
   File:   main
   Author: Hai Le
   Created on October 21, 9:30 AM
   Purpose:  Menu without Functions
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <string>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Problem 1"<<endl;
        cout<<"3.  Type 3  for Problem 3"<<endl;
        cout<<"4.  Type 4  for Problem 4"<<endl;

        
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:{
                //Input
                cout<<"Inside Problem 1"<<endl;
                int size;                       //Size of the x
                cout<<"Enter the size: ";
                cin>>size;
                //Process
                for(int rows=1; rows<=size; rows++){
                for(int cols=1; cols<=size; cols++){
                if(rows==cols || cols==(size+1)-rows)
                cout<<rows;  
                else cout<<" ";
                }
                cout<<endl;
                }
                break;
            }
            case 3:{
                cout<<"Inside Problem 3"<<endl;
                //Declare variables
                string Payee;
                cout<<"Enter the name of payee ";
                getline(cin, Payee);
    
                string AHolder;
                cout<<"Enter the name of receiver ";
                getline(cin, AHolder);
    
                int date, month, year;      //Date
                int amount;                 //Amount of the check
    
                //Input the values
                cout<<"Enter the date you write the check in order mm/dd/yy "<<endl;
                cin>>date>>month>>year;
                cout<<"Enter the amount you want to pay in $'s ";
                cin>>amount;
    
                //Display
                cout<<Payee<<endl;
                cout<<"STREET ADDRESS"<<endl;
                cout<<"CITY, STATE, ZIP"<<"                "<<"Date: "<<month<<"/"<<date<<"/"<<year<<endl;
                cout<<"Pay to the Order of: "<<AHolder<<"  "<<" $"<<amount<<endl;
                cout<<"Eight Hundred Eleven and no/100s Dollars"<<endl;
                cout<<"BANK OF CSC5 "<<endl;
                cout<<"FOR: GOTTA PAY THE RENT"<<"         "<<Payee<<endl;
    
    
                break;
            }
            case 4:{
                cout<<"Inside Problem 4"<<endl;
                //Declare variables
    float op1=16.75f;       //Cost of the first package
    short acc1=5;           //Access hour of first package
    float ad1=0.85f;        //Additional time cost of first package up to 20 hours
    short lhour1=20;        //Limit additional time of first package
    float Ad1=1.00f;        //Additional time cost of first package after 20 hours
    float op2=23.75f;       //Cost of the second package
    short acc2=15;          //Access hour of second package
    float ad2=0.65f;        //Additional time cost of second package up to 25 hours
    short lhour2=25;        //Limit additional time of second package
    float Ad2=0.75f;        //Additional time cost of second package after 25 hours
    float op3=34.95f;       //Cost of the third package
    short menu;             //Number of menu
    short xhour, hour, xhour1, xhour2;      //Hour
    float total1, total2;   //Total amount     
    do
    {
        cout<<"1. Package $16.75 per month"<<endl;
        cout<<"2. Package $23.75 per month"<<endl;
        cout<<"3. Package $34.95 per month"<<endl;
        cin>>menu;
        switch(menu){
            case 1:{
                cout<<"Package $16.75 per month"<<endl;
                cout<<"Enter how many hours you need ";
                cin>>hour;
                xhour=hour-acc1;
                total1=op1+(xhour*ad1);
                total2=op1+(lhour1*ad1)+(xhour-lhour1)*Ad1;
                if(xhour<0)
                {
                    cout<<"Your bill will be $"<<op1<<endl;
                    break;
                }
                {
                if(0<=xhour&&xhour<=20)
                    cout<<"You bill will be $"<<total1<<endl;    
                else if(20<xhour)
                    cout<<"You bill will be $"<<total2<<endl;
                    if(total2>op3)
                        cout<<"You should choose package 3, and"
                            <<"you will save $"<<total2-op3<<endl;
                    else
                    cout<<"You should choose package 2, and"
                            <<" you will save $"<<total2-op2<<endl;  
                }  
            case 2:{
                cout<<"Package $23.75 per month"<<endl;
                cout<<"Enter how many hours you need ";
                cin>>hour;
                xhour=hour-acc2;
                total1=op2+(xhour*ad2);
                total2=op2+(lhour2*ad1)+(xhour-lhour2)*Ad2;
                if(0<=xhour&&xhour<=25)
                    cout<<"You bill will be $"<<total1<<endl;    
                  
                else if(25<xhour)
                    cout<<"You bill will be $"<<total2<<endl;
                    if(total2>op2)
                        cout<<"You should choose package 2, and"
                            <<"you will save $"<<total2-op2<<endl;
                    else
                    cout<<"You should choose package 3, and"
                            <<"you will save $"<<total2-op3<<endl;  
            }
            case 3:{
                cout<<"Package $34.95 per month"<<endl;
                cout<<"You have unlimited access hours"<<endl;
                cout<<"Enter how many hours you need ";
                cin>>hour;
                {
                if(hour>=14 && hour < 33)
                    cout<<"You should choose package 2"<<endl;
                }   
                {
                    if(hour <14)
                        cout<<"You should choose package 1"<<endl;
                }
                
            }    }
          }
        
    }while(menu>0&&menu<4);
                break;
            
            
            }//End Case
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}