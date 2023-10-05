// C++ program to show that scope resolution operator :: is used
// to define a function outside a class
/*#include <iostream>
using namespace std;

class A
{
public:
    // Only declaration
    void fun();
};

// Definition outside class using ::
void A::fun()
{
    cout << "fun() called";
}

int main()
{
    A a;
    a.fun();
    return 0;
}
*/
#include <iostream>
using namespace std;
class Action
{
    private:
int x;
int y;
    public:
 int input(int a,int b);

};
 int Action::input(int a, int b)
{
x=a;
y=b;
int l;
l=(x+y);
return (l);
}
int main(int argc, char const *argv[])
{
  Action b1;
  int l,m;
  cin>>l>>m;
  cout<<b1.input(l,m);
    return 0;
}
