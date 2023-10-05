#include <iostream>
using namespace std;
class DEB
{
    private:
    int a;
    int b;
    int c;
    int d;

    public :
    DEB ()
    {
        cout<< "No argument"<<endl;
    }
    DEB(int x,int y)
    {
        a=x;
        b=y;
        cout <<a <<b <<endl;
    };
    DEB(int L,int M, int N)
    {
        a=L;
        b=M;
        c=N;

        cout <<a <<b<<c <<endl;
    };
    DEB(int s,int k,int r,int y)
    {
        a=s;
        b=k;
        c=r;
        d=y;
        cout <<a <<b<<c<<d <<endl;
    };
    /*
    DEB(int s,int k,int r,int y)
    {
        a=s;
        b=k;
        c=r;
        d=y;
        cout <<a <<b<<c<<d <<endl;
    };
    //operator overloading 
    */

};
int main(int argc, char const *argv[])
{
//DEB b1,b2,b3;
DEB c1();
DEB c2(10,20);
DEB c3=DEB(12,12);
//DEB c3(1,2,3); 
//CONSTRUCTOR OVERLOADING
//DEB c4(12, 13), c5(12, 23, 32), c6(89, 243, 3232, 32321), c6(892, 23, 232, 3232);
DEB c4(12, 13), c5(12, 23, 32), c6(89, 243, 3232, 32321);
return 0;
}
