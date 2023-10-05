// Copy Constructor call by reference (&n)
#include <iostream>
using namespace std;
class complex
{
private:
    int a;
    int b;

public:
    complex(int x,int y)
    {
       a=x;
       b=y;
        //cout << a <<b << endl;
    };
    complex (complex &n)
    {
     a=n.a;//a or b is belons l1 constructor  
     //n.a or n.b belongs c1 's a which refers by &n
     //&n means reference variable 
     b=n.b;
     cout<<a<<b;
    };
};
int main(int argc, char const *argv[])
{
  complex c1(12,13);
  complex L1(c1); //copy constructor
  // both same as ur wish 
  //complex L2=c1;
    return 0;
}
