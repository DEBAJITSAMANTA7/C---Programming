#include <iostream>
using namespace std;

class DEB
{
public:
static float a;

private:
static string b;

public:
static void GET_DATA (string x)
{
b=x;
cout<<b<<endl;
}
};

 float DEB::a;
 string DEB::b;

int main(int argc, char const *argv[])
{
    DEB b1;
    cin>>b1.a;
    cout<<b1.a<<endl;
// with out a instance or object create
    cin>> DEB::a;
    cout<< DEB::a <<endl;
//private class variables
    DEB b3;
    string y;
    cin>>y;
    b3.GET_DATA(y);
// private variable access without any object   using function
    DEB::GET_DATA(y);
// membership levelthen functioncall
    return 0;
}
