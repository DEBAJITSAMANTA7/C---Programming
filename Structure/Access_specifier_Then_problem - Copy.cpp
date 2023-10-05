#include <iostream>
#include <stdlib.h>
using namespace std;
struct book
{

    int Bookid;
    float price;
    char bookname[12];

    void input()
    {
        cout << "Enter the data for,Book id ,price  and title " << endl;
        cin >> Bookid >> price >> bookname;
    }
  
    
    void output()
    {
        cout << Bookid << "\t" << price << "\t" << bookname << endl;
    }
};

int main()
{
    struct book b1;
    b1.Bookid=-100;
    b1.input();
    b1.output();
    return (0);
}