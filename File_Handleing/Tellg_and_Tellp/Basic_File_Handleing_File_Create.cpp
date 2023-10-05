#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
ofstream info;
info.open("MyFile.odt");
info << "DEB";
     return 0;
}
