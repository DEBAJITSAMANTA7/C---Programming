// Function template
#include <iostream>
using namespace std;

template <class DEB, class JIT>
DEB big(DEB a, JIT b)
{
     if (a > b)
     {
          return (a);
     }
     else
     {
          return (b);
     }
}



int main(int argc, char const *argv[])
{
     cout << big(10, 45) << endl;
     cout << big(112.1, 12.483) << endl;
     return 0;
}
