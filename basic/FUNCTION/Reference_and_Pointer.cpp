using namespace std;
#include <iostream>
int main(int argc, char const *argv[])
{
    int *p, x=5, l=19;
    
    p=&x;
    cout<< *p << "\n";

    int &y=l ;
  
    cout<< y;

    return 0;
}
