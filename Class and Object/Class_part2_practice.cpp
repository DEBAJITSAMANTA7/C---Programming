//  Complex no using class objects returning 
#include <iostream>
using namespace std;
class complex
{
private:
  int x;
  int y;
public:
void input(int a, int b)
{
   x=a;
   y=b;
}

int output()
{
cout<<"x is:"<<x << " \t y is:" << y <<endl;
}


 complex add(complex D)
   {
       complex MANJU;
       MANJU.x= x+D.x;
       MANJU.y=y+D.y;
       return(MANJU);
   }
};

int main(int argc, char const *argv[])
{
int l,m,n,o;
complex b1,b2,b3;
cout<<"Enter the frequently two set of complex no for addition"<<endl;
cin>>l>>m>>n>>o;
b1.input(l,m);
b2.input(n,o);
b3=b1.add(b2);

b3.output();
return 0;
}
