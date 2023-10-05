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
DEBAJIT *ptr,b1;
ptr=&b1;
ptr->get_data(10,20,21);
ptr->show_data();
      return 0;
}
