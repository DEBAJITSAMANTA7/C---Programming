#include <iostream>
using namespace std;

class A
{
     public:
      void f1()
     {
          cout<<" main class Virtual f1()"<<endl;
     }
    virtual  void f2()
     {
          cout<<" main class Virtual f2()"<<endl;
     }
};
class B :public A
{
     public:
      void f1(int x)
     {
          cout<<" Child  class Virtual f1()"<<endl;
     }
      void f2()
     {
          cout << " derived  class Virtual f2()" << endl;
     }
};
int main(int argc, char const *argv[])
{
     A *p,a1;
     p = &a1;
     p->f1();
  /*  B *p1,b1;
    p1=&b1;
    p1->f1();*/
     return 0;
}
