#include <iostream>
using  namespace std;
class Account
{
 private:
     // rate of interest
     static float roi; // class member variable or static variable //its not depends on objects
     // class create that means + define out side of the class that means it got the memory 
     int balance;
   //instance variable means it only belongs or memory create when a object declear
  public:
   void set_balance(int b)
   {
       balance=b;
   }
};
//static variable define with out it class static variable not get the memory
float Account :: roi;
int main(int argc, char const *argv[])
{
    return 0;
}





