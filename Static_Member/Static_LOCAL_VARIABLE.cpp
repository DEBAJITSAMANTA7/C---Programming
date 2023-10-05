#include <iostream>
using namespace std;
void DEB()
{
static int a; //it store only 0 with out store any value
int b;        // it store only gurbage value  with out store any value
cout<<a <<"\n" <<b;
}

int main(int argc, char const *argv[])
{
    DEB();
    return 0;
}
