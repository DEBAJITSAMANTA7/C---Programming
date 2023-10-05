#include <iostream>
using namespace std;
class complex
{
private:
int x;
int y;

public:
 void get_data(int a,int b)
 {
     x=a;
     y=b;

 }
 void show_data()
 {
     cout <<x<<endl<<y;
 }
 complex operator - ()
 {
   complex temp;
   temp.x=-x;
   temp.y=-y;
return (temp);
 }
};

int main(int argc, char const *argv[])
{
complex b1,b2,b3;
int l,m;
cin>>l>>m;
b1.get_data(l,m);
b2= - b1;// or b2=b1.operator-();
b2.show_data();
    return 0;
}
