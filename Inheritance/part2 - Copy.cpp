// inheritance part 2
// not specified 

#include <iostream>
using namespace std;
class TEST
{
      private:
      int x=1;
      protected:
      int y=2;
      public:
      int z=3;
       int get(int l)
       {
             z=l;
             return (z);
       }
};
class A :public TEST
{
    //cout<< x; 
    //cout<< y; 
    //cout<< z; 

     
};

int main(int argc, char const *argv[])
{
      /* code */
      return 0;
}
