#include <iostream>
using namespace std;
class A
{
private:
      int x = 13;
      int c;

public:
      void f1()
      {
            cout << x << endl;
      }
      void f2()
      {
            cout << x << endl;
      }
      void HIDING(int k1, int k2)
      {
            x = k1;
            c = k2;
            cout << k1 << k2 << endl;
      }
};

class B : public A
{
private:
      int y = 12;

public:
      void f1()
      {
            cout << y << endl;
      } // method overriding

      void f2(int l)
      {
            y = l;
            cout << y << endl;
      } // method hiding
      void HIDING(int l4)
      {
            y=l4;
            cout<<y<<"\t Child class "<<endl;
      }
      
      
       void s1()
      {
            cout << y << endl;
      } // function Overloading
      void s1(int p)
      {
            y = p;
            cout << y << endl;
      }
};
int main(int argc, char const *argv[])
{

      cout << "Early Binding" << endl;
      B b1;
      A c1;
      b1.f1();
      // c1.f1();
      b1.f2(149);
      // b1.f2(); Error cause for Early Binding
      b1.HIDING(69);
      // b1.s1();
      //  b1.s1(12345);    // b1.f1();
      return 0;
}
