
#include <iostream>
#include <stdlib.h>
 using namespace std;
class DEB
{
private:
int x;
int y;
public:
void input(int a,int b)
{
x=b;
y=a;
}
inline int output()
{
return(x);
// return(y);
}
};

int main(int argc, char const *argv[])
{
  std::cout<< "THIS IS INPUT DATA AND RETURN DATA USING CLASS just swap"<<endl;
DEB b1;
int k,m;
cin>>k>>m;
b1.input(k,m);
cout<<(b1.output());
    
    return 0;
}
