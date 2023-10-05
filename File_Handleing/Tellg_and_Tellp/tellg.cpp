// tellg() here g for get pointer read mode
#include <iostream>
using namespace std;
#include <fstream>
int main(int argc, char const *argv[])
{
     ifstream fin;
     fin.open("abc.txt",ios::in);
     char ch;
     int pos;// int type cause tellp() store index no
     pos=fin.tellg();
     cout<<pos;
     fin>>ch;
     pos = fin.tellg();
     cout << pos;
     fin >> ch;
     pos = fin.tellg();
     cout << pos;
     return 0;
}
