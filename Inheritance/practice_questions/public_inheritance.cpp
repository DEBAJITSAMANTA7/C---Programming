// create a person(base class ) and employ(derived class ) and its salary sleaps
#include <iostream>
#include <string.h>
using namespace std;
class Person
{
private:
char name[20];

protected:
void set_Name(char *n)
{
strcpy(name , n);
};
public:
char* show_name()
{
      return(name);
}

};
class Employee : public Person
{
public:
float salary;
protected:
void set_salary(float s)
{
      salary=s;
}
public:
float show_salary()
{
return(salary);
}
void set_Employee(char *n,float s)
{
      set_Name(n);
      salary=s;
}
};

int main(int argc, char const *argv[])
{
  Employee b1;
  b1.set_Employee("DEBAJIT",10);
 cout<< b1.show_name()<<endl;
  cout<<b1.show_salary();
      return 0;
}
