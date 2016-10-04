/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 4, 2016, 2:01 AM
 * Purpose: Compare two different rectangles
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    float l1, l2, w1, w2, area1, area2;                     //The measures of two rectangles in meters
    
    //Input
    cout<<"The length of the first rectangle = ";           //The length of the first rectangle
    cin>>l1;
    cout<<"The width  of the first rectangle =  ";          //The width of the first rectangle
    cin>>w1;
    cout<<"The length of the second rectangle = ";          //The length of the second rectangle
    cin>>l2;
    cout<<"The width  of the second rectangle = ";          //The width of the second rectangle
    cin>>w2;
    cout<<endl;
    
    //Calculate the areas
    area1=l1*w1;                                            //The area of the first rectangle
    area2=l2*w2;                                            //The area of the second rectangle
    
    //Display the output
    cout<<"The area of the first rectangle is "<<area1<<" meters-square"<<endl;
    cout<<"The area of the second rectangle is "<<area2<<" meters-square"<<endl;
    
    {
        if (area1>area2)
            cout<<"The area of the first rectangle is greater than the area of the second rectangles"<<endl;
        else if (area2>area1)
            cout<<"The area of the second rectangle is greater than the area of the first rectangles"<<endl;
        else cout<<"The areas of two rectangle are the same"<<endl;
    }
    
    return 0;
}

