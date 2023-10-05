// seekg() means check and get means read tellg() colab
#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
     char ch;
     ifstream fin;
     fin.open("xyz.txt", ios::in | ios::binary);
     cout << fin.tellg() << "\t--->      "; // 0 index means D denoted
     cout << (char)fin.get() << endl;
     // fin>>ch;
     cout << fin.tellg() << "\t--->      "; // Auto read  2nd index no
     cout << (char)fin.get() << endl;
     cout << fin.tellg() << "\t--->      "; // Auto read  3nd index no
     cout << (char)fin.get() << endl;
     cout << fin.tellg() << "\t--->      "; // Auto read  4nd index no
     cout << (char)fin.get() << endl;
     cout << "print asqui code of A\t" << fin.get() << endl;
     // get() function return int type value so i put down here the (char)get() for type conversion
     cout << "-----------------Sekkg() Now Start------------------" << endl;
     // seek means look on and can give command to tellg() for chnage user define index no and and access
     fin.seekg(13);
     cout << fin.tellg() << "\t--->      "; // Auto read  13th index no
     cout << (char)fin.get() << endl;
     fin.seekg(8);                          // access index no 8
     cout << fin.tellg() << "\t--->      "; // Auto read  8th index no
     cout << (char)fin.get() << endl;
     
     cout << "specific area difine in seekg()" << endl;
     

     fin.seekg(3,ios_base::beg);
     cout << fin.tellg() << "\t--->      "; // Auto read  3rd index no DEBA means A is 3rd index index start from 0
     cout << (char)fin.get() << endl;

     fin.seekg(1,ios_base::end);
     cout << fin.tellg() << "\t--->      "; // Auto read from last 1st index no
     cout << (char)fin.get() << endl;

     fin.seekg(-7,ios_base::cur);
     cout << fin.tellg() << "\t--->      "; // Auto read from last -17th index no
     cout << (char)fin.get() << endl;
    
     return 0;
}
