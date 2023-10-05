// no encapsulation on structure 
#include <iostream>
using namespace std;
struct add
{
private:
int a;
int b;
int c=a+b;
public:
void input ()
{
    cin>> a>>b;
}

void output()
{
    //cout<<a+b;
    cout<<c<<endl;;
    cout<<&c;
 }
};


int main(int argc, char const *argv[])
{
add b1;
b1.input();
b1.output();
return 0;
}


