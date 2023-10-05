using namespace std;
#include <iostream>
int main(int argc, char const *argv[])
{
 int x ,y1=10,*p;
 x=123;
 int &y=x;
 cout<< &y << "\n";
  cout<< y << "\n";
  p=&y1;
 cout<< *p << "\n";
 cout<< p  << "\n";








    return 0;
}
