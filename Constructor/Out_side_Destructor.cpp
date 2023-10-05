#include <iostream>
using namespace std;
class Debajit
{
private:
int x;int y;

public:
~Debajit();
/*{
    cout<<"Destructor Run"<<endl;
}*/
};

Debajit:: ~Debajit()
{
    cout<<" Out side Destructor Run"<<endl;
}
int main(int argc, char const *argv[])
{
    Debajit b1;
    Debajit b2;
    return 0;
}
