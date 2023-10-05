#include <iostream>
using namespace std;
class parent
{
public:
     virtual void fun() = 0; // not do class
     void DEB()
     {
          cout<<"Another Function in parent Abstruct class "<<endl;
     }
}; 
class child : public parent
{
public:
     // virtual void fun() = 0; //here parent and child both not executeable
     // or define fun() method over riding
     void fun()
     {
          cout << "Child class fun is executed " << endl;
     }
};

int main(int argc, char const *argv[])
{
     child b1, *p;
     //b1.fun();
     p = &b1;
     p->fun();
     p->DEB();
     // parent b2; Error Abstruct class ar object hoy na 
     // b2.DEB();
     return 0;
}