#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
      int n;
      cin >> n;
      int *p = new int[n];
      int *p1 = new int;

      delete[] p; // p is not destroyed actually the reference done by p is being deleted
      delete p1;

      cout << p;
      int l = 18;
      p = &l;
      cout << p;
      return 0;
}
