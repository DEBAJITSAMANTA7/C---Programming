//  Polimorphism and function overloading 
//  both same name function have same no of variable access capability 
/*
Function_Overloading_neo.cpp: In function 'int add(int, int)':
Function_Overloading_neo.cpp:26:5: error: redefinition of 'int add(int, int)'
 int add (int l ,int m)
     ^~~
Function_Overloading_neo.cpp:21:5: note: 'int add(int, int)' previously defined here
 int add (int x, int y)
*/
using namespace std;
#include <iostream>
int add (int x, int y);
int add (int l ,int m);

int add(int x, int y)
{
  return x + y;
}

int add(int l, int m)

{
  return l + m;
}

int main(int argc, char const *argv[])
{
  int a,b,c,d, e;

  cout<< "enter the a and b\t"  << endl;  
  cin >> a>> b;
  cout<< "The direct sum \t" << add (a,b) << endl;  

  cout<< "enter the c and d , e\t"  << endl;  
  cin >> c>> d ;
  cout<< "The direct sum \t" << add (c,d) << endl;  

    return 0;
}

