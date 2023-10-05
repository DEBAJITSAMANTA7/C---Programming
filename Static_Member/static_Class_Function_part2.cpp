// static class function and its access
// when static variable present in public access specifier
#include <iostream>
using namespace std;
class DEB
{
    public:// when static variable prent in public access specifer
    
    static int a;
    int b = 68;
    
    private:
    static int x;
    int y=86;
    
    public:
   void Set_data(int l)// instance member function
   {
   x=l;
   cout<<x<<endl;
   }


   static void Set_data_2(int l)// static member function
   {
   x=l;
   cout<<x<<endl;
   }


};
int DEB:: a=12;
int DEB:: x;

int main(int argc, char const *argv[])
{
  cout<<"access public: static variable"<<endl;
  cout<< DEB::a<<endl; //with out any object
     DEB b1;
  cout << b1.a<<endl; // with a object b1
  // cout<< DEB::b; //error cause it is not an static variable u need to creare object for access
  cout << "access private: static variable :"<< endl;
  //\n 1.using static function create\n 2.and using object create instance member function"
  DEB b2;
  b2.Set_data(69);
//w/o any object using static function call 
  DEB::Set_data_2(96);
  return 0;
}
