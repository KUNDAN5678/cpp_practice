#include <iostream>
using namespace std; 

struct car {
    int model;
    float price; 
    string owener; 
};


void mystrut(car &mycar)
{
    cout<<mycar.model<<endl;
    cout<<mycar.owener<<endl; 
    cout<<mycar.price<<endl;  
    mycar.price= 10.5; 

}

void myfuntion()
{
    cout<<"I just  checking ::";
}

void myfuntion2(string desh="india")
{
    cout<<"desh: "<<desh<<endl; 
}

void changevalue(int &num1,int &num2)
{
    int temp ;
    temp = num1; 
    num1= num2; 
    num2 = temp ;  
    

}

void passary(int arr[])
{
//    for (int i=0; i<5; i++)
//    {
//      cout<<arr[i]<<endl; 
//    } 

arr[0]=20; 
arr[1]= 40; 

}

void stdi(string &str)
{
    str += " kundan"; 
}

int sum(int k)
{
    if(k>0)  
    {
      return k + sum(k-1);}
    else{

        return 0; 
    }
    

}


int main()
{

    myfuntion();
    myfuntion2("usa"); 
    myfuntion2(); 

    int num1= 10;
    int num2= 30;  
    changevalue(num1, num2); 
    cout<<num1<<num2<<endl;


    string good="hello"; 
    stdi(good); 

    cout<<good; 

    // ====

    int roll[4]={1,2,3,4}; 
    passary(roll);
for (int i=0; i<5; i++)
   {
     cout<<roll[i]<<endl; 
   } 




///jstructure 


car mycar = {102,2.5,"nano",}; 
mystrut(mycar); 

 cout<<mycar.model<<endl;
    cout<<mycar.owener<<endl; 
    cout<<mycar.price<<endl;

//recursion

int r= sum(10);
cout<<r; 


    return 0; 
}

