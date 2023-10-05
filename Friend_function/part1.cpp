#include <iostream> 
using namespace std;
class Check
{
    private :
    int x;
    int y;
    public:
    friend void add(Check dj);
    void get_data(int a,int b)
    {
        x=a;
        y=b;
    };
};
  void add(Check dj)
  {
    
      cout << "a+b is =" << dj.x + dj.y;
  };

int main(int argc, char const *argv[])
{
    Check c1;
    int l,m;
    cin >>l>>m;
    c1.get_data(l,m);
     add(c1);
    return 0;
}
