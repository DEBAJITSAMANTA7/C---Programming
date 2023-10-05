//  copy constructor  test
#include <iostream>
using namespace std;
class DEB
{
    private:
     int x;
     int y;
     int z;
    public:
     DEB(int a,int b)
     {
     x=a;
     y=b;
     };
     
     DEB (DEB &l)
     {
      x=1+l.x;
      y=1+l.y;
      z=x*y;
      cout<<"1+x*1+y=" <<z;

     };
};
int main(int argc, char const *argv[])
{
    int x1,x2;
    cin>>x1>>x2;
    DEB b1(x1,x2);
    DEB b2(b1);

    return 0;
}
