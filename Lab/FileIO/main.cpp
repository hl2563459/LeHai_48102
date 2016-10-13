/* 
 * File:   main.cpp
 * Author: Hai Le
 * Created on October 13, 2016, 11:26 AM
 * Purpose: File I/O
 */

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {

    //Declare variables
    fstream in;
    ofstream out;
    int rows, cols;
    string line;
    
    //Input values
    in.open("map.dat");
    in>>rows>>cols;
    cout<<"rows"<<rows<<" cols = "<<cols<<endl;
    
    //Display
    out.open("player.dat");
   getline(in, line);
    for (int row=1; row<=rows; row++)
    {
        getline(in, line);
        cout<<row<<"  "<<line<<endl;
        cout<<line;
    }
    cout<<"  ";
    for(int col=1; col<=cols; col++)
    {
        cout<<col;
    }
    cout<<endl;
    //Where do you want to place the player
    int prow, pcol;
    cout<<"Where to position the player in row and column"<<endl;
    cin>>prow>>pcol;
    cout<<"Player position in Y = "<<prow<<" Player position in X = "<<pcol<<endl;
    
    //Read back in the file
    in.close();
    in.clear();
    
    //Input values
    in.open("map.dat");
    in>>rows>>cols;
    cout<<"rows"<<rows<<" cols = "<<cols<<endl;
    
    //Display
   
    for (int row=1; row<=rows; row++)
    {
        getline(in, line);
        if(row==prow&&line[pcol-1]=='0')line[pcol]='P';
        cout<<line<<endl;
    }
    
    //Close the file
    in.close();
    return 0;
}

