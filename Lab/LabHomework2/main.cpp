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
    float a, b, c;
    
    //Input
    cout<<"Enter the first number = ";
    cin>>a;
    cout<<"Enter the second number = ";
    cin>>b;
    cout<<"Enter the third number = ";
    cin>>c;
    //Display the output
    {
        if (a>=b && a>=c && b>c)
            cout<<"The numbers sort : "<<a<<", "<<b<<" ,"<<c<<endl;
                else if (a>=b && a>=c && b<c)
                    cout<<"The numbers sort : "<<a<<" ,"<<c<<" ,"<<b<<endl;
                        else if (b>=a && b>=c && a>c)
                            cout<<"The numbers sort : "<<b<<" ,"<<a<<" ,"<<c<<endl;
                                else if (b>=a && b>=c && a<c)
                                    cout<<"The numbers sort : "<<b<<" ,"<<c<<" ,"<<a<<endl;\
                                        else if (c>=a && c>=b && b>a)
                                            cout<<"The numbers sort : "<<c<<" ,"<<b<<" ,"<<a<<endl;
                                                else if (c>=a && c>=b && b<a)
                                                    cout<<"The numbers sort : "<<c<<" ,"<<a<<" ,"<<b<<endl;
        else cout<<"The numbers sort : "<<a<<" ,"<<b<<" ,"<<c<<endl;
        
    
    }
    
    return 0;
}

