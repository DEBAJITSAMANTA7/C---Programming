// main type of public inheritance 
#include <iostream>
using namespace std ;
class Base
{
      private:
      int priv = 2;
      protected:
      int prot =3;
      public:
      int pub =4;
    int show_priv()
    {
          return(priv);
    }   
//cause of a class data members can not be accessable trough another class
//  that's why we create a privarte return function 
};

class Derived :public Base 
{
      public:
            // function to access protected member from Base
            int show_prot()
            {
                  return(prot);
            }
      // pulic member in base class easyly accessable 
};

int main(int argc, char const *argv[])
{
    Derived b1;
   int res1= b1.show_priv();
   int res2= b1.show_prot();
   int res3= b1.pub;
   cout<<res1<<"\n"<<res2<<"\n"<<res3;
   return 0;
}
