#include <iostream>
using namespace std;
class DEBAJIT 
{
private:
int x;
int y;
public:
DEBAJIT()
{
  cout<<"\n Default constructor"<<endl  ;
}
DEBAJIT(int a,int b)
{
cout<<"\t Constructor is Created"<<endl;
x=a,y=b;
cout<<b,a;
}

DEBAJIT(DEBAJIT &b) //copy constructor
{
   x=b.x+69;
   y=b.y+69;
   cout<<x<<y;


}

};

int main(int argc, char const *argv[])
{
    DEBAJIT b2(10,20);
     DEBAJIT b1;
     DEBAJIT b3(b2);

    return 0;
}
