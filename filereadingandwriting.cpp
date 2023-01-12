#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main()
{
    ofstream out("/home/anand/c++_tutorial/myfile.txt");
    string name;
    cout<<"enter your name : ";
    cin>>name;
    out<<name+" is my name";
    out.close();
    
    // ifstream in("/home/anand/c++_tutorial/myfile.txt");
    // // in>>name;
    // getline(in,name);
    // cout<<name;

    // in.close();


    return 0;
}