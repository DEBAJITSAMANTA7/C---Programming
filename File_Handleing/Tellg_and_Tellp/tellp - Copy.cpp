// p is put write means outstream
#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
     ofstream fout;
     fout.open("xyz.txt", ios::out | ios::app | ios::binary);
     int pos;
     char ch;
     pos = fout.tellp();
     cout << pos << endl;
     // if i write a new values beonds anthers data
     fout << "DEBAJIT";
     pos = fout.tellp(); //pos as madhe tellp() jato gulo new index no hoache ta chola asba
     cout << pos;

     // 7 array block cause agar value thaka 0 and new value add total block bolcha
     // cause u use ios::app mose in output section
     // if u don't use ios::mode then for outstream it delete previous data
     return 0;
}
