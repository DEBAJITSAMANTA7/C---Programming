#include <iostream>
using namespace std;
class Base;
class Derived;
class Base 
{
private:
int x;
public:
Base(int k)
{
    x=k;
    cout<<x<<endl;  
    cout<<"Base Class Running "<<endl;
}
};

class Derived  : public Base
{
private:
int y;
public:
Derived(int a ,int b):Base(a)
{
y=b;
cout<<y<<endl;
cout << "Derived Class Running " << endl;
}

};






int main(int argc, char const *argv[])
{
     Derived b1(1,2);
      return 0;
}
