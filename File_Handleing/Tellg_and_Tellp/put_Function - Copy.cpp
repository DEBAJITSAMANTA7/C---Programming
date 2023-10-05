#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{

     ofstream fout;
     fout.open("File2.txt", ios::out|ios::app);

     char arr[100] = "Hello World. We wish you best in everything. Never give up!";

     int length = strlen(arr);
     cout<<length;
     char ch;

         for (int i = 0; i < length; i++)
     {
          ch = arr[i];
          fout.put(ch);
     }
     fout.close();

     return 0;
}