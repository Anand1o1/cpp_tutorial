#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main()
{
    ifstream in;
    in.open("anil.txt");
    if (!in.is_open())
    {
        cout << "error while opening the file";
    }
    else
    {
        cout << "reading from the file contents are : ";
        string line;
        while (!in.eof())
        {
            getline(in, line);
            cout << line << endl;
        }
    }

    return 0;
}