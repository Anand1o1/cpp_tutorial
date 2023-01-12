// // Q3)wap to find the number of characters present (length of file),number of words and
// // number of sentences present in the file

// #include <iostream>
// #include <fstream>
// #include <string.h>
// using namespace std;
// int main()
// {
//     ifstream in;
//     in.open("student.txt");
//     string h;
//     int i=0;
//     while (in.eof()==0)
//     {
//         getline(in,h);
//         i++;
//         cout<<h<<endl;

//     }
//     cout<<"no. of characters present is : "<<i;
//     in.close();
//     return 0;
// }

#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ifstream fin("fname.txt");
    int word = 0;
    int space = 0;
    int lines = 0;
    int charc = 0;
    char ch;

    fin.seekg(0, ios::beg);

    while (fin)
    {
        fin.get(ch);
        charc++;
        if (ch == '\n')
            word++;
        else if (ch == ' ')
            space++;
        else if (ch == '.')
            lines++;
    }

    cout << "\ncharacters=" << charc << endl;
    cout << "\nWords=" << word;
    cout << "\nspaces=" << space << endl;
    cout << "\nlines=" << lines << endl;
    fin.close(); // closing file

    return 0;
}
