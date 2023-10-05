//  Bases of Encapsulation use members functions with in the class 
#include <iostream>
using namespace std;
class DEB
{
private :
int x;
int y;
public :
void get_data(int a,int b)
{
x=a;
y=b;
}
 void show_data()
 {
     cout<<"x is : "<<x <<"\n" <<"y is : "<<y<< endl;
 }
};
int main(int argc, char const *argv[])
{
int l,m;
cout<<"Enter the value of l and m "<< endl;
cin >> l>>m;
DEB b1;
b1.get_data(l,m);
b1.show_data();
return 0;
}