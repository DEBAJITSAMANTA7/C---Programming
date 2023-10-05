// Function template
#include <iostream>
using namespace std;

// template <class DEB> why it is important
//  cout << big(10, 4.5) << endl; useing  same class name we can't pass  diff  argument in a function
template <class DEB>
DEB big(DEB a, DEB b)
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
     cout << big(10, 4.5) << endl; //different data types in function template 
     cout << big(112.1, 12.483) << endl;
     return 0;
}
