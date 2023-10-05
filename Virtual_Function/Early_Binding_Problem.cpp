// Static Memory allocation
//  Compile Time Mem alloc (SMA)
#include <iostream>
using namespace std;
// class A CAR
// class B is Sport Car
class A
{
private:
     int x1;
     int y1;

public:
     void f1()
     {
          cout << "F1 of Parent Class Run" << endl;
     }
};

class B : public A
{
private:
     int x2;
     int y2;

public:
     void f1()
     {
          cout << "F1 of Child Class Run" << endl;
     }
};
int main(int argc, char const *argv[])
{
     A a1, *p;

     p->f1(); // Also Run cause of *p a object of Class A
     p = &a1;
     p->f1();
     B b1;
     p = &b1; // we store in p the caller reference of b1 but still print A class f1() function but i need B class f1()
     // cause at early binding compiler don't check p reference address, check  p data type means Class A so Run Class A f1()
     p->f1();

     return 0;
}
