#include <iostream>
using namespace std;
class complex;
class calculator;

class calculator
{
public:
      int add_real(complex, complex);
      int add_imag(complex, complex);
};

class complex
{
private:
      int x, y;
      friend int calculator::add_real(complex, complex);
      friend int calculator::add_imag(complex, complex);

public:
      void get_data(int s1, int s2)
      {
            x = s1;
            y = s2;
      }
      void show_data()
      {
            cout << x << y << endl;
      }
};

int calculator::add_real(complex l1, complex l2)
{
      int temp = l1.x + l2.x;
      return (temp);
}
int calculator::add_imag(complex l3, complex l4)
{
      int temp1 = l3.y + l4.y;
      return (temp1);
}

int main(int argc, char const *argv[])
{
      complex b1, b2;
      b1.get_data(1, 2);
      b2.get_data(3, 4);
      calculator c1, c2, c3;
      int res1 = c1.add_imag(b1, b2);
      cout << res1 << endl;
      int res2 = c2.add_real(b1, b2);
      cout << res2;
      return 0;
}
