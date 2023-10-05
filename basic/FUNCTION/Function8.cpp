using namespace std;
#include <iostream>
int sum (int &p,int &q);

int main(int argc, char const *argv[])
{
int a=5,b=6;
int s =sum(a,b);
cout<< "Sum is \t:" << s;
    return 0;
}

int sum (int &p,int &q)
{
    return (p+q);
}
