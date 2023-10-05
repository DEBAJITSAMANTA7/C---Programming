#include <iostream>
using namespace std;
class complex
{
private:
    int a;
    int b;
public:
//no constructor created by user
};
int main(int argc, char const *argv[])
{
    complex b1(); //default constructor that auto created by compiler 
    //not passing any arguments
    return 0;
}
