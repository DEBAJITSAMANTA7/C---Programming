//Bases  members functions access outside from class  but declear it with in the function
//then use scope resolution operator :: with class name ex DEB::
//void DEB::get_data(int a, int b)
//when member functions is decleard outside of the class then fun always not in inline for so 
//if we want to do it on inline bases then declear it on inline 
#include <iostream>
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
int main(int argc, char const *argv[])
{
    int l, m;
    cout << "Enter the value of l and m " << endl;
    cin >> l >> m;
    DEB b1; // here b1 is an object
    b1.get_data(l, m);
    b1.show_data();
    return 0;
}