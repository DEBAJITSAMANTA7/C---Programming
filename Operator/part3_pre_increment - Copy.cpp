//pre post increment & pre post decrement
#include <iostream>
using namespace std;
class Debajit
{
private:
int x;
public:
void get_data(int a)
{
x=a;
}
void show_data()
{
    cout<<"x is =" <<x<<endl;
}
Debajit operator++()
{
    //post increment both b1 and b2 x incremented
    Debajit temp;
    temp.x=++x; //++x this is b1 object xvariable 
    return (temp);
}

};
int main(int argc, char const *argv[])
{
    Debajit b1,b2,b3,b4;
    int l;
    cin>>l;
//preincrement
    b1.get_data(l);
    b2=++b1;//b2=b1.operator++();
    b1.show_data();
    b2.show_data();
    return 0;
}

