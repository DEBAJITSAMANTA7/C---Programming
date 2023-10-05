#include <iostream>
using namespace std;
class DEBAJIT
{
private:
      int x;
      int y;
      int z;

public:
      void get_data(int a, int b, int c)
      {
            x = a;
            y = b;
            z = c;
      }
      void show_data()
      {
            cout << x << y << z << endl;
      }
};

int main(int argc, char const *argv[])
{
DEBAJIT b1,*p;
p=&b1;

//b1.get_data(1,2,3);
//b1.show_data();
p->get_data(1,2,3);
p->show_data();
      return 0;
}
