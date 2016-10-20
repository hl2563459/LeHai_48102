/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 20, 2016, 10:44 AM
 * Purpose: Calculate customers monthly bill
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    float op1=16.75f;
    float op2=23.75f;
    float op3=34.95f;
    float adhour1=0.85f;
    float adhour2=0.65f;
    unsigned short hour;
    unsigned short menu;
    unsigned short lhour1=20;
    unsigned short lhour2=25;
    float total;
    
    do
    {
        cout<<"1. Package $16.75 per month"<<endl;
        cout<<"2. Package $23.75 per month"<<endl;
        cout<<"3. Package $34.95 per month"<<endl;
        cin>>menu;
        switch(menu){
            case 1:{
                float op1=16.75f;
                float adhour1=0.85f;
                unsigned short hour;
                cout<<"Package $16.75 per month"<<endl;
                cout<<"Enter how many hours you need";
                cin>>hour;
                while(hour>=9){
                    cout<<"You better choose Package $23.75 per month"<<endl;
                }
                    total=op1+(hour*adhour1);
                    cout<<"The total monthly bill is $"<<total<<endl;
                    break;
            }
            case 2:{
                float op2=23.75f;
                unsigned short lhour2=25;
                unsigned short hour;
                cout<<"Package $23.75 per month"<<endl;
                cout<<"Enter how many hours you need";
                cin>>hour;
                while(hour<=9&&hour>30){
                    cout<<"You have to choose Package $34.95 per month"<<endl;
                }
                    total=op2+(hour*adhour2);
                    cout<<"The total monthly bill is $"<<total<<endl;
                    break;
            }
            case 3:{
                cout<<"Package $23.75 per month"<<endl;
                cout<<"You have unlimited hour"<<endl;
                cout<<"The total monthly bill is $"<<op3<<endl;
                break;
            }
        }
    }while(menu>0&&menu<4);
    
    
    

return 0;
}
