#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
     ifstream fin;
     char ch;
     fin.open("myfile.exe");
     ch = fin.get();
     while (!fin.eof())
     {
     cout << ch;     // write on scree                 
     ch = fin.get(); // read data from fil                 
     }
     fin.close();
     return 0;
}