#include <iostream>
using namespace std;
class complex;
class DEB;

class DEB
{

public:
    int real_add(complex, complex);
    int img_add(complex, complex);
};

class complex
{
private:
    friend DEB:: int real_add(complex, complex);
    friend DEB:: int img_add(complex, complex);

    int x;
    int y;

public:
    void get_data(int l, int m)
    {
        x = l;
        y = m;
    }
    void show_data()
    {
        cout << x << " " << y << endl;
    }
}; 
int DEB:: real_add(complex b1, complex b2)
{
    complex temp;
    temp.x=b1.x+b2.x;
    return(temp);
}
DEB::int img_add(complex b3, complex b4)
{
    complex temp1;
    temp1.y=b3.y+b4.y;
    return(temp1);
}

int main(int argc, char const *argv[])
{
    DEB c1;
complex c2,c3,c4;
c2.get_data(10,20);
c3.get_data(30,40);

    return 0;
}
