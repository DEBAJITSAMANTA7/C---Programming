#include <iostream>
using namespace std;
class DEB;// class declearation so much important for friend function
class JIT;

class DEB
{
private: //friend function is not a member function that's why u can declear it any access specifier
int x;
friend  void add(DEB c1, JIT c2);
public:
void get_data(int a)
{
    x=a;
}

};

class JIT
{
private:
int y;
public:
   friend  void add(DEB c1, JIT c2);
   void get_data(int b)
   {
       y = b;
   }
};

void add(DEB c1,JIT c2)
{
cout<<c1.x+c2.y;
}

int main(int argc, char const *argv[])
{
    int l,m;
    DEB s1;
    JIT s2;
    cin>>l>>m;
    s1.get_data(l);
    s2.get_data(m);
    add(s1,s2);
    return 0;
}
