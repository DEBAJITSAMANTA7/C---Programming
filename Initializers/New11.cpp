#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Dummy
{
private:
     int a, b;
     const int x;
     int &y;
     // New11.cpp:9:6: note: 'int& Dummy::y' should be initialized
     // int &y;
     // now here in all these instance members variables can initize
     // if i do still [const int x=7; ]they are not getting the memoy locations

public:
     // ctrate a constructor

     Dummy(int &n) : x(10), y(n), a(34), b(890) // multiple variable initilization
     {
          cout << x << endl;
          cout << y << endl;
          cout << a << endl;
          cout << b << endl;
     };
};

int main(int argc, char const *argv[])
{
     int m = 7;

     Dummy b1(m);
     return 0;
}
