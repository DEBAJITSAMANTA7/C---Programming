#include <iostream>
using namespace std;
class complex
{
private:
    int a;
    int b;
    int c;

public:

    complex(int k, int p, int s)
    {
        a = k;
        b = p;
        c = s;
        cout << a << b << c << endl;
    };
};
int main(int argc, char const *argv[])
{
    cout << " Parameterrirzed Constructor " << endl;
// means when ever u just create a object also there u should know the constructors (intake parameters)
//and your assigning parameters
    //complex c1(1, 2), c2(5), c3(46), c();
  complex c1=complex(2,3,4);
  //complex c2; error caus akbar constructor bananor par default constructor compiler kora na 
  complex c2();
    return 0;
}
