//  Polimorphism and function overloading 
using namespace std;
#include <iostream>
int add (int x, int y);
int add (int l ,int m, int n);
int main(int argc, char const *argv[])
{
  int a,b,c,d, e;

  cout<< "enter the a and b\t"  << endl;  
  cin >> a>> b;
  cout<< "The direct sum \t" << add (a,b) << endl;  

  cout<< "enter the c and d , e\t"  << endl;  
  cin >> c>> d >>e;
  cout<< "The direct sum \t" << add (c,d,e) << endl;  




    return 0;
}
int add (int x, int y)
{
return x+y ;
}

int add (int l ,int m, int n)

{
  return l+m+n ;
}



