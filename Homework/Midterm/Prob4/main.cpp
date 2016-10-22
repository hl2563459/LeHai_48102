
/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 21, 2016, 1:44 AM
 * Purpose: Calculate customers monthly bill
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    float op1=16.75f;
    short acc1=5;
    float ad1=0.85f;
    short lhour1=20;
    float Ad1=1.00f;
    float op2=23.75f;
    short acc2=15;
    float ad2=0.65f;
    short lhour2=25;
    float Ad2=0.75f;
    float op3=34.95f;
    short menu;
    short xhour, hour, xhour1, xhour2;
    float total1, total2;
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
    
    return 0;
}

