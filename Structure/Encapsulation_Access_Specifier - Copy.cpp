#include <iostream>
#include <stdlib.h>
using namespace std;
struct book
{
    private:
int Bookid ;
float price;
char bookname[12];
    public:
void input ()
{
    cout << "Enter the data for,Book id ,price  and title " << endl;
    cin >> Bookid >>  price >> bookname;
}
void output ()
{
    cout<<Bookid<<"\t"<<price <<"\t"<<bookname <<endl;
}

};

int main()
{
    book b1;
    b1.input();
    b1.output();
    return (0);
}