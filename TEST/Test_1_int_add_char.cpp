using namespace std;
#include <iostream>
template <class DEV>
DEV check_zero(DEV x)
{
    if (x == 0)
    {
        cout << "it is a zero" << endl;
    }
    else
    {
        cout << "it's Not a Zero" << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    check_zero(n);
    return 0;
}
