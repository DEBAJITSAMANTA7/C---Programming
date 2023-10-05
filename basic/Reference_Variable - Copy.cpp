using namespace std;
#include <iostream>
main()
{
int y =32,z=567,i;
int *x;
x = &y;
cout << x <<"\n";
// reference variable a alter native of x pointer
int& k =z;

cout <<   k << "\n" ;
k=i++;
cout << k ;
    return 0;
}