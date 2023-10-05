// Encapsulation_Uing Structure in C++
#include <iostream>
#include <stdlib.h>
using namespace std;

struct book 
{
    int bookid;
    char title[20];
    float price;
void input()
{
    cout << "Enter the data for,Book id ,title  and price " << endl;
    cin >> bookid >> title >> price;
}
 void output ()
 {
     cout << bookid << " " << title << " "  << price << endl;

 }

};
int main(int argc, char const *argv[])
{
    book b;
    b.input();
    b.output();
    return 0;
}




































































































































