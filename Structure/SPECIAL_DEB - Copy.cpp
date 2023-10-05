// use typedef keywords
#include <iostream>
using namespace std;
struct SPECIAL_DEB input(b1 a, b1 b);

typedef struct SPECIAL_DEB
{
    /* data */
    int x;
    int y;

}b1;

struct SPECIAL_DEB input(b1 a, b1 b)
{
 
    b1 c;
    c = a ;

    return (c);
}

int main(int argc, char const *argv[])
{
    int l,m;
    l=12;m=12;
    b1.input(l,m);



    return 0;
}
