//  Call By Reference 
using namespace std;
#include <iostream>
int reference (int &a,int &b);
int main(int argc, char const *argv[])
{
int x,y,z;
  cin>> x >>  y;
z = reference(x,y);

cout <<z;
    return 0;
}
int reference (int &a,int &b)
{
   /* int i,c;
    for (size_t i = 0; i < count; i++)
    {
    
    }
    */
    int c1 =a+b;
    // c1= &a+&b;
    return (c1);


}