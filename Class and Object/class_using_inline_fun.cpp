//Bases  members functions access outside from class  but declear it with in the function
//then use scope resolution operator :: with class name ex DEB::
//void DEB::get_data(int a, int b)
//when member functions is decleard outside of the class then fun always not in inline for so 
//if we want to do it on inline bases then declear it on inline 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class DEB
{
private:
    int x;
    int y;

public:
    void get_data(int a, int b);

    void show_data();
};

inline void DEB::get_data(int a, int b)
{
    x = a;
    y = b;
}
inline void DEB::show_data()
{
    cout << "x is  : " << x << "\n"
         << "y is : " << y << endl;
}

class DEB2
{
private:
    char p;

public:
    // DEB2(/* args */);
    // ~DEB2();
   void  show_Data();
   void  take_Data(char a2);
};

void DEB2::show_Data()
{
cout<<"p is : "<<p<<endl;
}

void DEB2::take_Data(char a2)
{
    p=a2;

}

// DEB2::DEB2(/* args */)
// {
// }

// DEB2::~DEB2()
// {
// }






int main(int argc, char const *argv[])
{
    int l, m;
    cout << "Enter the value of l and m " << endl;
    cin >> l >> m;
    DEB b1; // here b1 is an object
    b1.get_data(l, m);
    b1.show_data();


DEB2 b2;
char l1;
cin>>l1;
b2.take_Data(l1);
b2.show_Data();


    return 0;
}



