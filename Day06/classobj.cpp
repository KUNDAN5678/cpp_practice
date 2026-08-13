#include <iostream>
using namespace std; 

class Myclass
{
    public:
     int mynum; 
     string mystr; 
     void mymethod()
     {
        cout<<"mymethod "; 
     }

     void mymethod2();
     int meta(int x);

};

void Myclass::mymethod2()
{
    cout<<"mymethod2; "; 
}


int  Myclass::meta(int max)
{
    return (max * max); 
}
int main()
{
    Myclass c1; 

    c1.mynum= 15; 
    c1.mystr= "kundan"; 

    Myclass c2; 

    c2.mynum= 34; ; 
    c2.mystr= "suman";
    c2.mymethod(); 
    c2.mymethod2();
   int k= c2.meta(2);
   cout<<k; 


    cout<<c1.mynum; 
    cout<<c1.mystr; 

    cout<<c2.mynum<<c2.mystr; 
    return 0; 
}



