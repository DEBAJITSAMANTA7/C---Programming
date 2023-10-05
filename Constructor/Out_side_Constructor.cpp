#include <iostream>
using namespace std;
class DEBAJIT
{
private:
    /* data */int x,y,z;
public:
    DEBAJIT(/* args */);
    DEBAJIT(int l,int m);
    DEBAJIT (DEBAJIT &b2);

};

DEBAJIT::DEBAJIT(int l,int m)
{
x=l;y=m;
}

DEBAJIT:: DEBAJIT(DEBAJIT &b2)
{
    x=b2.x;
    y=b2.y;
    cout<<x+y;
}



int main(int argc, char const *argv[])
{
   DEBAJIT c1(10,20);
   DEBAJIT c2(c1);
   DEBAJIT v1;

    return 0;
}
