#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
     ofstream output; //write 
     output.open("MyFile.exe", ios::out | ios::app | ios::binary);
     //output.open("MyFile.exe", ios::in | ios::app | ios::binary);
     output << "\n DEB \n helo";
     return 0;
}
