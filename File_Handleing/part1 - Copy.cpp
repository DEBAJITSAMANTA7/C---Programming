// #include <bits/stdc++.h>
#include <istream>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
ofstream fout; //define or Ready the stream line of (output)write stream but not connect the inner file for save data
fout.open("MyFile.exe");//u can define the whole path also if u know which place u want to store the data
//now u connect the inner file with flow 
//still if u have a file already then u can also copy the path link and paste here also ****
   //if not then user define new file will create then work further processes  
fout<<"HEllO NEW FILE CREATED By Debajit samanta"<<endl; 
    
     return 0;

}