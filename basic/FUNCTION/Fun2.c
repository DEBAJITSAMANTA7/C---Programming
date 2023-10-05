//  Take somethings and return nothing
#include <stdio.h>
int  a,b,c,d;
void DEB (int a ,int b);
int main(int argc, char const *argv[])
{
 int x,y;
 printf(" Enter two no \n ");
 scanf("%d %d",&x,&y);
DEB(x,y);


    return 0;
}
 void  DEB (int a,int b )
 {
c=a+b;
printf("THE ADDITION IS :  %d \n",c);

 }