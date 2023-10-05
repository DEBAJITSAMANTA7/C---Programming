// with parameterrised constructor how to create a class  
#include <iostream>
using namespace std;
class DEB
{
private:
      int x;
      int y;
      int z;
      int xo;

public:
      DEB(int l)
      {
            x = l;
            cout << x << endl;
      }
    

      DEB()//for create class in para cons you should do a constructor which is not taking any argument
      {

            cout << "Constructor without any argument run or default constructor created" << endl;
      }
};
int main(int argc, char const *argv[])
{
      DEB c1(10);
      
      // DEB c4();
      DEB c5;
      //   DEB l1;

      return 0;
}
