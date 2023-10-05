// user define private and protected inheritance  
#include <iostream>
using namespace std;
class Base
{
private:
      int pri = 2;

protected:
      int prot = 3;

public:
      int pub = 4;

      int show_pri()
      {
            return (pri);
      }
      void set_data(int l,int l1,int l2)
      {
            pri=l;
            prot=l1;
            pub=l2;
      }
};
class Derived : private Base
{
      public:
      int show_prot()
      {
            return(prot);
      }
      int show_pub()
      {
            return(pub);
      }
      void set_data_main(int s,int s1,int s2)
      {
            set_data(s,s1,s2);
      }
};



int main(int argc, char const *argv[])
{
      
      Derived b1;
      b1.set_data_main(99,89,78);
      //int res11=b1.show_pri();/* code */ private not accessable 
      int res=b1.show_prot();/* code */
      int res1=b1.show_pub();/* code */
      cout<<res<<endl<<res1;
      return 0;
}
