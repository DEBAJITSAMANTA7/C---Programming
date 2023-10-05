#include <iostream>
using namespace std;
class complex;
class complex
{
private:
int x;
int y;

public:
void get_data(int l ,int l1)
{
x=l;
y=l1;
}
void show_data()
{
      cout<<x <<"\t"<<y<<endl;
}

friend complex operator-(complex run);
};
 
 complex operator -(complex run)
 {
complex temp;
temp.x=-run.x;
temp.y=-run.y;
return (temp);
 }

int main(int argc, char const *argv[])
{
int s,p;
cin>>s>>p;
complex c1,c2;
c1.get_data(s,p);
c2=-c1;
c2.show_data();
// c2=operator -(c1);
      return 0;
}
