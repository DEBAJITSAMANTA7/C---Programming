//  in function call you may directly assign nos without use it in a user define no 
using namespace std;
#include <iostream>
int add (int x, int y);
int main(int argc, char const *argv[])
{
  cout<< "The direct sum \t" << add (123,56) << endl;  
    return 0;
}
int add (int x, int y)
{
return x+y ;
}


