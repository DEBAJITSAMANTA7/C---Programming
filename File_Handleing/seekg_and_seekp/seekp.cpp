// seekp() output pointer tellp() write operations ofstream operations
#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

     ofstream fout;
     fout.open("NATO.txt", ios::out | ios::ate | ios::binary);
     fout << "DEBAJITPALLABI" << endl;
     cout << fout.tellp()<<endl;// after I last index new index no


     char ch = 'D';//new add

     fout.put(ch);
     cout << fout.tellp()<<endl;

cout<<"---------------------seekp now use -----------------"<<endl;
fout.seekp(8,ios_base::beg);
cout <<fout.tellp()<<endl;
fout.seekp(-7,ios_base::end);
cout << fout.tellp()<<endl;
fout.seekp(7,ios_base::cur);
cout << fout.tellp();
fout.close();
return 0;
}
