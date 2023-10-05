// user accessable or define structure using function
// takes nothing and return something //why i use input return type is not  void or int type cause i already
// made a types of data type thats hold only int ,float and character which is a array

#include <iostream>
#include <stdlib.h>
using namespace std;
//  makes structure
void  takedata();
void output(book b1);

struct book
{
    int bookid;
    char title[20];
    float price;
};

int main(int argc, char const *argv[])
{
    book b;
    b = takedata();
    output(b);
    return 0;
}
void  takedata()
{
    book b1;
    cout << "Enter the data for,Book id ,title  and price " << endl;
    cin >> b1.bookid >> b1.title >> b1.price;
    return (b1);
}

void output(book b1)
{
    cout << b1.bookid << b1.title << b1.price;
    
}