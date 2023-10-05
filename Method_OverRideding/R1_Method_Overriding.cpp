#include <iostream>
using namespace std;
class DEB;
class JIT;
class DEB
{
public:
   virtual void f1()
    {
        cout << "Parets f1()" << endl;
    }
};
class JIT : public DEB
{
    public:
    void f1() //here you can define virtual but for public inheritance it not getting any issue
    {
       cout<<"Child Class f1()"<<endl;
    }
};
/*class JIT:public DEB
{
   public:
   void f1()
   {
    cout<<"Derived f1()"<<endl;
   }
};
int main(int argc, char const *argv[])
{
    DEB b1,*ptr;
    ptr=&b1;
    ptr->f1();//CTM/SMA

    JIT b2;
    ptr=&b2;
    ptr->f1();//but ata to child ar f1() run howar katha
    //DMA /Run time polymorphism




    return 0;
}
*/
// Now Solution
int main(int argc, char const *argv[])
{
    DEB b1,*ptr;
    ptr=&b1;
    ptr->f1();//CTM/SMA

    JIT b2;
    ptr=&b2;
    ptr->f1();//for virtual it not focus on type of ptr focus on the reference of * ptr
    return 0;
}
