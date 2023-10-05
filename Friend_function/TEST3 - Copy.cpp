#include <iostream>
using namespace std;
class DEB;
class JIT;
class DEB
{
private:
int x;
int y;
public:
void set_data(int l,int l1)
{
    x=l;
    y=l1; 
}
friend void operator + (DEB c1,JIT c2);
};

class JIT
{
private:
int a;
int b;
public:
void set_data(int l,int l1)
{
    a=l;
    b=l1;
}
friend void operator+(DEB c1, JIT c2);
};

void operator+(DEB c1, JIT c2)
{
cout<<c1.x+c2.a<<"\t"<<c1.y+c2.b;
}

    int main(int argc, char const *argv[])
{
    DEB b1,b3;
    JIT b2;
    
    int o,p,q,r;
    cin>>o>>p>>q>>r;
    b1.set_data(o,p);
    b2.set_data(q,r);
    b1+b2;//b1.operator+(b2); wrong 
    //operator + (b1,b2);

    
    return 0;
}
