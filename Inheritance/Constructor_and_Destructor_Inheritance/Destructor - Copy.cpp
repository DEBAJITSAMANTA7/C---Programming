#include <iostream>
using namespace std ;
class parent{
      public :
      ~parent()
      {
            cout <<"parent class destructor run"<<endl;
      }

};
class child :public parent{
public :

~child()
{
      cout<<"Child class destructor is run"<<endl;
}
};
int main(int argc, char const *argv[])
{
   child b1;
      return 0;
}
