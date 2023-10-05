#include <iostream>
using namespace std;
class DEB
{
      int x;

public:
      DEB(int l)
      {
            x = l;
            cout << x;
      }
};
int main(int argc, char const *argv[])
{
      DEB c1(10);
     // DEB l1; using this para constructor you can not create any other object

      return 0;
}
