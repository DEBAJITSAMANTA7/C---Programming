#include <iostream>
using namespace std;

class Car
{
private:
      int x;

public:
      void main_gear(int l)
      {
            x = l;
            cout << x << " \t Parent CLASS" << endl;
      }
};

class SportsCar : public Car
{
private:
      int y;

public:
      void main_gear(int k)
      {
            y = k;
            cout << y << "\t CHILD CLASS" << endl;
      }
};

int main(int argc, char const *argv[])
{
SportsCar b1;
b1.main_gear(12);
Car b2;
b2.main_gear(78);
      return 0;
}
