#include <iostream>
using namespace std;
class DEB;
class JIT;
class TEST;

class TEST
{
private:
int dj;
float dj1;
public:
friend TEST SAMANTA (class DEB,class JIT);
void show_data()
{
    cout<<dj<<endl<<dj1;
}
};
class DEB
{
    private:
    int x;
    float y;
    public:
    void get_data(int l,float l1)
    {
        x=l;
        y=l1;

    }
    friend TEST SAMANTA (DEB s, JIT s1);
};
class JIT
{
    private:
    int a;
    float b;
    public:
    void get_data(int l,float l1)
    {
        a=l;
        b=l1;

    }
    friend TEST SAMANTA (DEB s, JIT s1);
};

TEST SAMANTA(DEB s, JIT s1)
{
    TEST temp;
    temp.dj = s.x + s1.a;
    temp.dj1 = s.y + s1.b;
    return (temp);
}

int main(int argc, char const *argv[])
{
    DEB x1;
    JIT x2;
    TEST R;
    int p,p1;
    float d,d1;
    cin>>p>>p1;
    cin>>d>>d1;
    x1.get_data(p,d);
    x2.get_data(p1,d1);
    SAMANTA(x1,x2);
    R.show_data();
    return 0;
}
