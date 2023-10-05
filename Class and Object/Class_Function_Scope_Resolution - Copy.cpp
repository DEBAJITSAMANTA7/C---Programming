//:: scope Resolution Operator
#include <iostream>
#include <stdlib.h>
using namespace std;
class DEB
{
private:
    int x;
    int y;
public:
    void input(int a, int b); // here i declear the function of the outside
    int output();
    int output2();
};

void DEB:: input (int a,int b)
{
x=a;
y=b;
}

int DEB:: output ()
{
return(x);
}
int DEB:: output2 ()
{
return(y);
}


int main(int argc, char const *argv[])
{
 cout<<" Scope Resolution Operator use Outside Function Access variable with in the Class  "<<endl;
DEB b1;
int l,m,n;
cin>>l>>m;
b1.input(l,m);
cout<<(b1.output())<<"\n"<<(b1.output2());

    return 0;
}
