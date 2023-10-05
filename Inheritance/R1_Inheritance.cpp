#include <iostream>
using namespace std;
class DEBAJIT;
class SAMANTA;
class DEBAJIT
{
private:
    int pri = 10;

protected:
    int pt = 20;

public:
    int pub = 30;
    int pri_access()
    {
        return (pri);
    }
DEBAJIT();

DEBAJIT(int k);

~DEBAJIT()
{
    cout<<"Parent Class Destructor Run"<<endl;
}
};
DEBAJIT::DEBAJIT(int k)
{
    pub=k;
cout<<" Parent Class Constructor Run"<<pub<<endl;
}


class SAMANTA : public DEBAJIT
{
public:
    void show_data();
SAMANTA(int p):DEBAJIT(p)
{
    cout<<"Child Constructor Run";
}
SAMANTA();
~SAMANTA()
{
    cout<<" Child Class Destructor Run";
}
};




void SAMANTA::show_data()
{
    cout << pt << " " << pub << " ";
    cout << pri_access();
}
int main(int argc, char const *argv[])
{SAMANTA b1(69),b3();
SAMANTA b2;
// b2.show_data();
    return 0;
}
