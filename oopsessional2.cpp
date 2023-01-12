#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main()
{
    ofstream o("soyam.txt",ios::trunc);
    o << "ananda swaroop sahoo";
    o.close();
    char ch;
    ifstream in("soyam.txt", ios::in);
    string h;
    int x;
    getline(in, h);
   in.seekg(0, ios::end);
   x=in.tellg();
    // in.close();
    int k=0;
    char r;
    ofstream out("sigma.txt");
    for (int i = 0; i <= x; i++)
    {
        in.get(ch);
        r=ch;
        if (r==' ')
        {
           k++;
        //    out<<' ';
        }
        if (k%2==0)
        {
            out<<r;
        }
        

        
    }

    return 0;
};
