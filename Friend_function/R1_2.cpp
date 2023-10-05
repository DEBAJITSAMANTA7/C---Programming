#include <iostream>
using namespace std;
class DEB;
class JIT;
class DEB
{
    private:
    int x=10;
    int y=10;
    friend void f1();
};
void DEB::f1()
{
    cout<<x+y;
}
class JIT
{

};
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
