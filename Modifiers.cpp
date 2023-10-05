using namespace std;
#include <iostream>
int main(int argc, char const *argv[])
{

cout<< "size of char=\t " <<sizeof(char) << "bytes \n" ;
cout<< "size of double =\t " <<sizeof(double) << "bytes \n " ;
cout<< "size of long long =\t " <<sizeof(long long) << "bytes \n " ;
cout<< "size of bool  =\t " <<sizeof(bool) << "bytes \n" ;
cout<< "size of float =\t " <<sizeof(float) << "bytes \n " ;
cout<< "size of int =\t " <<sizeof(int) << "bytes \n " ;




cout << " -----------------------MODIFIERS----------------------\n";

signed int k=+123;
signed int k1 =- 123;
cout<< "signed both number : \t " << k+k1 << "\n";
unsigned int k2=+123;
 unsigned int k3 =- 123;
cout<< "signed both number : \t" << k2-k3; 
cout<<" \n" << &k2 ;  // base address finder   --
    return 0;
}