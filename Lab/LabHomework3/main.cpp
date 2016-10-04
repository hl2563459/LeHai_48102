/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 4, 2016, 11:18 AM
 * Purpose: Determine numbers in order
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    float a, b, c, d;
    
    //Input
    cout<<"Enter the first number = ";
    cin>>a;
    cout<<"Enter the second number = ";
    cin>>b;
    cout<<"Enter the third number = ";
    cin>>c;
    cout<<"Enter the fourth number = ";
    cin>>d;
    //Display the output
        {
            if (a>=b && a>=c && a>=d && b>=c && b>=d && c>=d)
        cout<<"The numbers sort : "<<a<<", "<<b<<" ,"<<c<<" ,"<<d<<endl;
        else if (a>=b && a>=c && a>=d && b>=c && b>=d && c<d)
        cout<<"The numbers sort : "<<a<<" ,"<<b<<" ,"<<d<<" ,"<<c<<endl;
        else if (a>=b && a>=c && a>=d && b>=d && c>=d && b<c)
        cout<<"The numbers sort : "<<a<<", "<<c<<" ,"<<b<<" ,"<<d<<endl;
        else if (a>=b && a>=c && a>=d && c>=b && c>=d && d>=b)
        cout<<"The numbers sort : "<<a<<", "<<c<<" ,"<<d<<" ,"<<b<<endl;
        else if (a>=b && a>=c && a>=d && d>=b && d>=c && b>=c)
        cout<<"The numbers sort : "<<a<<", "<<d<<" ,"<<b<<" ,"<<c<<endl;
        else if (a>=b && a>=c && a>=d && d>=b && d>=c && c>=b)
        cout<<"The numbers sort : "<<a<<", "<<d<<" ,"<<c<<" ,"<<b<<endl;
        }
     {
            if (b>=a && b>=c && b>=d && a>=c && a>=d && c>=d)
        cout<<"The numbers sort : "<<b<<", "<<a<<" ,"<<c<<" ,"<<d<<endl;
        else if (b>=a && b>=c && b>=d && a>=c && a>=d && c<d)
        cout<<"The numbers sort : "<<a<<" ,"<<b<<" ,"<<d<<" ,"<<c<<endl;
        else if (a>=b && a>=c && a>=d && b>=d && c>=d && b<c)
        cout<<"The numbers sort : "<<a<<", "<<c<<" ,"<<b<<" ,"<<d<<endl;
        else if (a>=b && a>=c && a>=d && c>=b && c>=d && d>=b)
        cout<<"The numbers sort : "<<a<<", "<<c<<" ,"<<d<<" ,"<<b<<endl;
        else if (a>=b && a>=c && a>=d && d>=b && d>=c && b>=c)
        cout<<"The numbers sort : "<<a<<", "<<d<<" ,"<<b<<" ,"<<c<<endl;
        else if (a>=b && a>=c && a>=d && d>=b && d>=c && c>=b)
        cout<<"The numbers sort : "<<a<<", "<<d<<" ,"<<c<<" ,"<<b<<endl;
        }
    return 0;
}

