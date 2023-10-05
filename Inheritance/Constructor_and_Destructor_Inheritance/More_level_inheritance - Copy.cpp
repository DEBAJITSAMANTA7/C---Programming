// More level of inheritance
#include <iostream>
using namespace std;
class Base
{
private:
      int x;

public:
      Base(int l)
      {
            x=l;
            cout << x<<"\t" <<"base Is Constructor " << endl;
      }
      ~Base ()
      {
            cout<<"Base Destructor "<<endl;
      }
};

class Derived : public Base
{
private:
      int y;

public:
Derived(int b): Base(b)
{
cout<<"Derived class Constructor "<<endl;
}
~Derived()
{
      cout<<"Derived Destructor call"<<endl;
}
};

int main()
{
      Derived b1(12);

      return 0;
}