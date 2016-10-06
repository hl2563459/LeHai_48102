/* 
   File:   main
   Author: Hai Le
   Created on October 5, 2016, 2:50 PM
   Purpose:  Determine leap year
 */

#include <iostream>   
using namespace std;

int main(int argc, char** argv) {
    
    //Declaration variables
    unsigned short year,month;
    
    //Input
    cout<<"Type in year and month to return the number of days in a month"<<endl;
    cout<<"Month 1 to 12 and Year 1500 to 3000"<<endl;
    cin>>year>>month;
    
    //Input
    if(year<1500||year>3000){
        cout<<"Bad Year "<<endl;
        return 0;
    }
    if(month<1||month>12){
        cout<<"Bad Month"<<endl;
        return 0;
    }
    
    //Display the output
    switch(month){
        case 1: cout<<"There are 31 days in January, "<<year<<endl;break;
        case 2: {
            if(year%4!=0){
                cout<<"There are 28 days in February, "<<year<<endl;
            }else if(year%400==0){
                cout<<"There are 29 days in February, "<<year<<endl;
            }else if(year%100==0){
                cout<<"There are 28 days in February, "<<year<<endl;
            }else{
                cout<<"There are 29 days in February, "<<year<<endl;
            }
            break;
        }
        case 3: cout<<"There are 31 days in March, "<<year<<endl;break;
        case 4: cout<<"There are 30 days in April, "<<year<<endl;break;
        case 5: cout<<"There are 31 days in May, "<<year<<endl;break;
        case 6: cout<<"There are 30 days in June, "<<year<<endl;break;
        case 7: cout<<"There are 31 days in July, "<<year<<endl;break;
        case 8: cout<<"There are 31 days in August, "<<year<<endl;break;
        case 9: cout<<"There are 30 days in September, "<<year<<endl;break;
        case 10: cout<<"There are 31 days in October, "<<year<<endl;break;
        case 11: cout<<"There are 30 days in November, "<<year<<endl;break;
        case 12: cout<<"There are 31 days in December, "<<year<<endl;break;
    }
    
    return 0;
}