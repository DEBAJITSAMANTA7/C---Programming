#include <iostream>
using namespace std;
class COMPLEX
{
private:
    static int a;
    int b;

public:
    static void get_data(int l)
    {
        a = l;
    }
    static void show_data()
    {
        cout << a;
    }
};

int COMPLEX::a;
int main(int argc, char const *argv[])
{
    int l1, l2;
    COMPLEX c1, c2;
    cin >> l1 >> l2;
    c1.get_data(l1);
    c1.show_data();
    return 0;
}