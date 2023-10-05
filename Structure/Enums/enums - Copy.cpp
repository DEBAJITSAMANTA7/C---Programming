//  One types of define  a data 
//  Main function ar bhatora korta haba 
// enum{}; store only int value in form of character
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    enum DEB
    {
        WBCS,
        ENGINERE,
        Investor
    };
    cout <<WBCS <<endl;
    cout <<ENGINERE <<endl;
    cout <<Investor <<endl;
    
    cout <<(WBCS==0 )<<endl; // here == is true and false (1),(0)
    cout << (ENGINERE == 3) << endl;
    cout << (Investor == 1) << endl;

    cout<<(WBCS+ENGINERE)<<endl;//0+1
    return 0;
}
