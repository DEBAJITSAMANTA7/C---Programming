 #include <iostream>
 using namespace std;

 class DEBAJIT 
 {
     private :

     int x ;
     int y;
     int z;
    double *z1;

     public:
     void  data(int a,int b);

    ~DEBAJIT () //destructor function
      {
        cout << "Destructor created and it just Oprerationised  "<<endl;
     // use delete keyword
      };
 };
     void DEBAJIT:: data (int a,int b)
     {
         x=a;
         y=b;
         z=a+b;
         cout<<z<<endl;
     
     };
int main(int argc, char const *argv[])
{
    int l,m;
    cin>>l>>m;
    DEBAJIT b1;
    b1.data(l,m);
    return 0;
}
