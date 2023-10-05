#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class DEB
{
private:
    int x;
    int y;

public:
    void get_data(int l);
    void show_data();
    DEB operator ++();
    DEB operator ++(int);
};

void DEB::get_data(int l)
{
    x = l;

}
void DEB::show_data()
{
    cout << x  << endl;
}
DEB DEB:: operator++()
{
    DEB temp;
temp.x=++x;
return(temp);
}
DEB DEB:: operator++ (int)
{
    DEB temp;
temp.x=x++;
return(temp);
}
int main(int argc, char const *argv[])
{
    DEB b1, b2, b3;
    b1.get_data(10);
    b2.get_data(30);
    b3=++b1;
    b3.show_data();
    b3=b2++;
    b3.show_data();



    return 0;
}
