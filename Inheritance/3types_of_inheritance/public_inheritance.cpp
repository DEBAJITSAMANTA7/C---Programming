#include <iostream>
using namespace std;
class parent
{
public:
      int a;
      int b;
      void add_data(int l, int l1)
      {
            a = l;
            b = l1;
            cout << l + l1;
      }
};

class child : public parent
{
      public:
      void set_data(int s,int s1)
      {
         add_data(s,s1);
      }
};

int main(int argc, char const *argv[])
{
      int j,j1;
      cin>>j>>j1;
 child b1;
b1.set_data(j,j1);

return 0;
}
