// Compile time polimorphism
// add two complex no
#include <iostream>
using namespace std;
class COMPLEX 
{
    private:
    int x;
    int y;  

    public:
    void set_data(int a,int b)
    {
        x=a;
        y=b;
    }
   //COMPLEX add(COMPLEX D)
   COMPLEX operator +(COMPLEX D) //operator overloading

   {
       COMPLEX j;
       j.x=x+D.x;
       j.y=y+D.y;
     
      return (j);
   }
   void show_data ()
   {
       cout << "---" << endl << x << "\n" <<y;
   }

};
int main(int argc, char const *argv[])
{
    COMPLEX b1,b2,b3,b4;
    int l,m,n,o;
    cin>>l>>m>>n>>o;
    b1.set_data(l,m);
    b2.set_data(n,o);
    
    //b3=b1.add(b1);
    b3=b1.operator+(b2);
    // u can also use this as alternative
    // b3=b2+b1; ata mana kintu b3=b1.operator+(b1); sudhu operator no parathesis and no operator keyword
    b3.show_data();

    return 0;
}
