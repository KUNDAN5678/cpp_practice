#include <iostream>
using namespace std; 

struct car
{
    int carprice; 
    string carmodel; 
}car1; 


int main()
{

    car1.carprice=200000; 
    car1.carmodel="tata01"; 

    cout<<"car model: "<< car1.carmodel<<endl; 
    cout<<"car price: "<< car1.carprice<<endl; 
    
}