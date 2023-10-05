// C++ program to show that we can access a global variable
// using scope resolution operator :: when there is a local
// variable with same name
#include <iostream>
using namespace std;

int x; // Global x

int main()
{
 cin>>::x;
 cout<<x<<"\n";
 cout<<::x;
    return 0;
}
