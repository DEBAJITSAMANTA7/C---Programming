#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream fin;
    char ch;
    fin.open("myfile.exe");
    while (!fin.eof())
    {
     fin>>ch;//read data from file 
     cout<<ch;//write on screen
    }
    fin.close();

     return 0;
}
