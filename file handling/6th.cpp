#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main()
{
    ifstream in("anil.txt", ios::in);
    if (!in.is_open())
    {
        cout << "error";
    }
    else
    {
        cout << in.tellg() << endl;
        string line;
        in.seekg(2);
        getline(in,line);
        cout<<line;
    }
  
    return 0;
}