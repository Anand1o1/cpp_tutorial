// 2)wap to read the contents of the file , print to montor and also write to another file
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main()
{
    ifstream in("/home/anand/c++_tutorial/student.txt");
    string h;
    getline(in,h);
    cout<<h;
    in.close();
    ofstream out("anand.txt");
    out<<h;
    cout<<endl;
    cout<<h;
    return 0;
}