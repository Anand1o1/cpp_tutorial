#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main()
{
    fstream file("anil.txt", ios::in | ios::out | ios::app);
    if (!file.is_open())
    {
        cout << "error while opening the file " << endl;
    }
    else
    {
        cout << "file opened successfully" << endl;
        file << "learning file handling";
        string line;
        file.seekg(0);
        while (!file.eof())
        {
            getline(file,line);
            cout<<line<<endl;
        }
        
    }

    return 0;
}