// when we will do private inheritance is not relation
//private inheritanace 
#include <iostream>
using  namespace std;
class array
{
      private:
      int a[10];
      public:
       void insert(int index, int value )
       {
           a[index]=value;
           cout<<a;
       }
};
class STACK : private array
{
public:
int top;
void get_data_push(int dj)
{
insert(top,dj);
}
};
int main(int argc, char const *argv[])
{
  STACK b1;
 b1.get_data_push(12);
 return 0;
}
