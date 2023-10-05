// Function call by passing objects and returning Objects
//  Add two complex no of using this 
#include <iostream>
using namespace std;
class COMPLEX
{
private:
  int a;
  int b;
public:
void set_data(int x,int y)
  {
      a=x;
      b=y;
  }
void show_data()
{
    cout<<a <<"\n"<< b;
}

COMPLEX add( COMPLEX  DJ )
{
// here c2 all elements assigned in DJ Variable
COMPLEX SAMANTA;
//  NEW  COMPLEX TYPE VARIABLE THAT IS NOT LNKED IN C1,c2,c3 its totally different 
SAMANTA.a=a+DJ.a; //=c1.a+(DJ.a or c2.a)
SAMANTA.b=b+DJ.b;
return (SAMANTA);
}

};

int main(int argc, char const *argv[])
{
    int l,m,n,o;
    cin>>l>>m>>n>>o;
    COMPLEX c1,c2,c3;
    c1.set_data(l,m);
    c2.set_data(n,o);
    c3=c1.add(c2);
    //c3=SAMANTA;
    c3.show_data();
    return 0;
}
