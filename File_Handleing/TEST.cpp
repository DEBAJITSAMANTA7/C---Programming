#include <fstream>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
     ofstream output;
     output.open("DEBAJIT SAMANTA.exe");
     output << "HELLO EVERYONE I AM DEBAJIT SAMANTA " << endl;
     ifstream input;
     input.open("DEBAJIT SAMANTA.exe");
     char ch;
     while (!input.eof())
     {
          ch = input.get();
          cout << ch;
     }
     return 0;
}
