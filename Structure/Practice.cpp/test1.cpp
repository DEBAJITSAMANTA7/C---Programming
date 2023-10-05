// Write a program using structure that can print  add,sub , and multiplication of two complex no
#include <iostream>
using namespace std;
#include <stdlib.h>

struct test1
{
    int real;
    int imaginary;


    void input ()
    {
        cout << "Enter The real and imaginary part:" << endl;
        cin  >> real >> imaginary;
    }
    void add ()
    {
        cout<< (real + imaginary) << endl;
    }
    
    void add ()
    {
        cout<< (real + imaginary) << endl;
    }





};

int main(int argc, char const *argv[])
{
test1 b1;
b1.input();
    return 0;
}