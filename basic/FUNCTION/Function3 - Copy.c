//  Take something and Return some thing

#include <stdio.h>
int a,b;
int compare (int a,int b);

int main(int argc, char const *argv[])
{
 int x,y,z,*l;
printf("Enter the no for a+b-10 \n");
scanf("%d %d",&a,&b);
z = compare(x,y);
printf(" the out put is %d",z);
l=&z;
printf("z address  %d\t",*l  );
    return 0;
}

int compare (int a,int b)
{
  int c=a+b;
return (c);
}







