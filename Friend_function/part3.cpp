// friend function Overloading 
#include <iostream>
using namespace std;
class complex ;
class complex
{
    private:
    int x;
    int y;

    public:
    void set_data(int a,int b)
    {
        x=a;
        y=b;
    }
    void show_data()
    {
        cout<<x<<"\n"<<y;
    }

    friend complex operator+(complex l1, complex l2);
};
 complex operator+(complex l1,complex l2)  //no membership level
 {
complex temp;
temp.x=l1.x+l2.x;
temp.y=l1.y+l2.y;
return(temp);
 }

int main(int argc, char const *argv[])
{
    complex c1,c2,c3;
    int l,m,n,o;
    cin>>l>>m>>n>>o;
    c1.set_data(l,m);
    c2.set_data(n,o);
    //c3=c1+c2; //it's not c3=c1.operator+(c2);
    c3=operator+(c1,c2);
    c3.show_data();
    return 0;
}
