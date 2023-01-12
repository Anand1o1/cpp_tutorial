#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("anil.txt", ios::in | ios::out | ios::trunc  );
    if (!file)
    {
        cout << "error while opening the file";
    }
    else
    {
        cout<<"file opened successfully";
        file.close();
    }

    return 0;
}