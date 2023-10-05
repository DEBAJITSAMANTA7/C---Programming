#include <bits/stdc++.h>
using namespace std;
void value(int & ,int  &);
// void value(int &x ,int &y ); declearation u can optional
void value(int &x ,int &y )
{
cout<<x+y<<endl;
cout<<x<<"  " <<&x<<endl;

}
int main(int argc, char const *argv[])
{
    int a=10,b=20;
   value(a,b);
   cout<<&a;
    return 0;
}