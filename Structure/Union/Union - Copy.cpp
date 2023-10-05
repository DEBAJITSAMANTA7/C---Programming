//  why we use union at the time when we access any data type from it it only provide you a single data type
    // so memory utilisation so good than structure 
    // same as like structure 
#include <iostream>
using namespace std;
union DEBAJIT
{
   int a;
   float b;
   char c[20];
}
// b1
;

int main(int argc, char const *argv[])
{
/*here we don't access a and b variable directly after one we use t in cout or any other syntexes
b1.a=10;
cout<<b1.a <<endl;
b1.b=12.62654465;
cout<<b1.b <<endl;
cout<<b1.c;
*/
union DEBAJIT b2;
b2.a=112;
b2.b=19282.8738723;
cout<<b2.a<<endl;// here we can not directly access two variable so access with out print or use it at define time 
// 1st a and then b thats why a is over root and b only print proper value and a is just provide gurbage value 
cout<<b2.b<<endl;

    return 0;
}

