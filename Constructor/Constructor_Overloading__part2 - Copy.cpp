#include <iostream>
using namespace std;
class complex
{
private:
    int a;
    int b;
    int c;

public:
    complex(int x)
    {
    a=x;
    cout<<a<<endl;
    };

    complex(int l,int m)
    {
    a=l;
    b=m;
    cout<<a<<b<<endl;
    };

    complex(int k,int p,int s)
    {
    a=k;
    b=p;
    c=s;
    cout<<a<<b<<endl;
    };

};
int main(int argc, char const *argv[])
{
    cout<<"constructor Overloading"<<endl;
    //complex c1=complex(1,2),c2=complex (5); //any of these both are same
    complex c1(1,2,3),c2(5),c3(46),c();
    //complex c7=complex(1,2,3,4); //error cause constructor only 1 to 3 parameters limits
    return 0;
}
