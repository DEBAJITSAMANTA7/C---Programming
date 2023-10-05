#include <iostream>
#include <stdlib.h>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
int main(int argc, char const *argv[])
{
    book b1,b2,b3;
 b1={12,"debajiT life Story",100.54} ;
cout<<b1.bookid;


    return 0;
}