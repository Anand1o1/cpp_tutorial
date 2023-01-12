// The tellg() and tellp() elements are used to return the current position of the file pointer.
// The tellg() is called by an ifstream class object which returns the correct position of
// the *get pointer and tellp() function is called by ofstream class object which returns the
// current position of the *put pointer

// 1)wap to create a file and stores the name of the student which is entered by the user from the keyboard

// 2)wap to read the contents of the file , print to montor and also write to another file

// 3)wap to find the number of characters present (length of file),number of words and number of sentences present in the file

// 4)wap to take input content from the keyboard store to file and print ithcharacter to gthcharacter(i and j are user input and i and j are inclusive).

#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main()
{
    // WRITING A FILE

    // string st = "anand bhai";
    // ofstream out("/home/anand/c++_tutorial/myfile");
    // out << st;


    // if (!myfile)
    // {
    //     cout<<"File not created!!";
    // }
    // else
    // {
    //     cout<<"file created successfully !";
    //     myfile<<"odd section walon ke mkc";
    //     myfile.close();
    // }





    // READING A FILE 

    string st;
    ifstream in("/home/anand/c++_tutorial/myfile");
    //in>>st; //only one word will be read in order to reade the whole sentense we use
    getline(in,st);
    cout<<st<<endl;
    getline(in,st);
    cout<<st;


    //  fstream myfile;
    //  myfile.open("/home/anand/c++_tutorial/myfile", ios::in);
    //  if (!myfile)
    //  {
    //      cout << "no such file";
    //  }
    //  else
    //  {
    //      char ch;
    //      while (1)
    //      {
    //          myfile >> ch;
    //          if (myfile.eof())
    //          {
    //              break;
    //          }
    //          cout << ch;
    //      }
    //  }
    //  myfile.close();

    return 0;
}