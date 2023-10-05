//it is only for int type 
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Arraylist
{
private:
     struct ControlBlock
     {
          int capacity;
          int *arr_ptr;
     };
     ControlBlock *s;

public:
     Arraylist(int capacity)
     {
          s = new ControlBlock;
          s->capacity = capacity; // capacity(structure ar part)=capacity holo constructor ar argument
          // both are not same
          s->arr_ptr = new int[s->capacity]; // size of array
     }
     void addElement(int index, int data)
     {
          if (index >= 0 && index <= s->capacity - 1)
          {
               s->arr_ptr[index] = data;
          }
          else
          {
               cout << "Array Index is not valid " << endl;
          }
     }
     void viewElement(int index, int &data) //& cause it store reference of index no
     {
          if (index >= 0 && index <=   s->capacity - 1)
          {
               data = s->arr_ptr[index];
          }
          else
          {
               cout << "Array Index is not valid " << endl;
          }
     }
     void viewList() // view full list
     {
          int i;
          for (i = 0; i < s->capacity; i++)
          {
               cout << "" << s->arr_ptr[i] << endl;
          }
     }
};

int main(int argc, char const *argv[])
{     int data;
     Arraylist list1(4); // constructor single argument for capacity of arrray
     list1.addElement(0, 32);//index and particular index value
     list1.addElement(1, 2);//index and particular index value
     list1.addElement(2, 3899);//index and particular index value
     list1.addElement(3, 69);//index and particular index value
     list1.viewElement(3,data); //index with pass the reference of data 

     list1.viewList();
    cout<<"value in the array is :"<<data<<endl;
     return 0;
}
