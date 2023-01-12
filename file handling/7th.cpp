#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    ofstream out("anil.txt",ios::out);
    if (!out.is_open())
    {
        cout<<"error";
    }
    else
    {
        cout<<out.tellp()<<endl;
        out<<"anand sahoo rocks";
        cout<<out.tellp()<<endl;
        out.seekp(5);
        out<<"and he is awsome";
        cout<<out.tellp()<<endl;
    }
    
    return 0;
}