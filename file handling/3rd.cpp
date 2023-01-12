#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main()
{
    ofstream out;
    out.open("anil.txt");
    if (!out.is_open())
    {
        cout << "unable to open the file " << endl;
    }
    else
    {
        out << "ananda swarooop sahoo" << endl;
        out << "hello bye";
        out.close();
        cout<<"successfully written to the file open it and check it out"; 
    
    }

    return 0;
}