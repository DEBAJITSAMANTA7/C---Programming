#include <iostream>
using namespace std;
class match;
class DEBAJIT;
class SAMANTA;

class DEBAJIT
{
private:
    int x;
    friend match add(DEBAJIT b, SAMANTA c);

public:
    void gate_value(int l)
    {
        x = l;
    }
};
class SAMANTA
{
private:
    int y;
    friend match add(DEBAJIT b, SAMANTA c);

public:
    void get_value(int m)
    {
        y = m;
    }
};
class match
{
private:
    int x;
    int y;

public:
    void showdata()
    {
        cout << x << y;
    }
    friend match add(class DEBAJIT, class Samanta);
};



void match add(DEBAJIT b, SAMANTA c)
{
    // cout<<(b.x+c.y);
    match temp;
    temp.x = b.x;
    temp.y = c.y;
    return (temp);
}


int main(int argc, char const *argv[])
{
    DEBAJIT b1;
    SAMANTA c1;
    match lp;

    b1.gate_value(10);
    c1.get_value(20);
    lp = add(b1, c1);
    lp.showdata();

    return 0;
}
