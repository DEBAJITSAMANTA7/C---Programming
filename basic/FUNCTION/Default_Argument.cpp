//Default arguments
using namespace std;
#include <iostream>
#include <stdlib.h>
int x,y,z,a,b,c,d,e,f;
int  multiplication (int x  , int y , int z=1 ,int x1=1, int x2=1 );
// int  multiplication (int x  , int y , int z=1 ,int x1, int x2=1 ); Error x1 
int main(int argc, char const *argv[])
{
   cout<<"enter two no for multiplicaton \n ";
   cin>> a>> b;
  cout << multiplication(a ,b) ;
   
   // 2nd function call
   cout<<"\n"<<"enter 5 Maxium no for multiplicaton \n ";
   cin>> x>>y>>z>>a>>b;
  cout << multiplication(x,y,z,a,b) << "\n" ;
    return 0;
}

int  multiplication (int x, int y, int z ,int x1, int x2 )
{
    return (x*y*z*x1*x2);
}
