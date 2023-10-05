// user define value in public inheritance
#include <iostream>
using namespace std;
class Base
{
private:
      int priv;

protected:
      int prot;

public:
      int pub;
      int show_priv()
      {
            return (priv);
      }
      void set_priv_pub_prot(int l, int z, int l1)
      {
            priv = l;
            prot = l1;
            pub = z;
            
      }
      // cause of a class data members can not be accessable trough another class
      //   that's why we create a privarte return function
};

class Derived : public Base
{
public:
      void set_data(int s1, int s2, int s3)
      {
            set_priv_pub_prot(s1, s2, s3);
      }

      // function to access protected member from Base
      int show_prot()
      {
            return (prot);
      }

      // pulic member in base class easyly accessable
};

int main(int argc, char const *argv[])
{
      Derived b1;
      int k, k1, k2;
      cin >> k >> k1 >> k2;
      b1.set_data(k, k1, k2);
      int res1 = b1.show_priv();
      int res2 = b1.show_prot();
      int res3 = b1.pub;
      cout << res1 << "\n"
           << res2 << "\n"
           << res3;
      return 0;
}
