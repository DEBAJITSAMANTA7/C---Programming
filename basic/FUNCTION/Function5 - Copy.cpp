//  Take some thin g and return some thing
#include <iostream>
using namespace std;
int add(int a ,int b);

int main(int argc, char const *argv[])
{
int x,y;
cin >> x >> y;
int z = add(x,y);
cout << " The addition is  \n" << z;
return 0;
}

int add(int a ,int b)
{
return (a+b);
}







