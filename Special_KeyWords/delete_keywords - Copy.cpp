#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
   int x=10;
   int* z;
   *z=x;
   delete z;
   std::cout<<z<<endl;
   std::cout<<*z;

   

    return 0;
}
