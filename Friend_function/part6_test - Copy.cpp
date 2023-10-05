#include <iostream>
using namespace std;
class claculator;
class complex;
class calculator
{
public:
      int sum_real(complex, complex);
      int sum_img(complex, complex);
};

class complex
{
private:
      int a;
      int b;

public:
      friend int calculator ::sum_img(complex, complex);
      friend int calculator ::sum_real(complex, complex);
      void get_data(int l, int l1)
      {
            a = l;
            b = l1;
      }
      /*void show_data()
      {
            cout << a << b;
      }*/
};

int calculator ::sum_real(complex s1, complex s2)
{
      return (s1.a + s2.a);
}

int calculator ::sum_img(complex p1, complex p2)
{
      return (p1.b + p2.b);
}

int main(int argc, char const *argv[])
{
      int res, res1, m, n, o, p;
      cin >> m >> n >> o >> p;
      complex c1, c2;
      c1.get_data(m, n);
      c2.get_data(o, p);
      calculator sk; // cause its friend function of complex class not calculator class
      res = sk.sum_real(c1, c2);
      cout << "------------------------------\n"
           << res << endl;
      res1 = sk.sum_img(c1, c2);
      cout << res1;
      return 0;
}
