#include <iostream>
using namespace std; 

class car
{
    public: 
    //   car()
    //   {
    //     std::cout<<"Helloc  constructor :"; 
    //   }
    car();

      car(int a, int b)
      {
        std::cout<<a <<b<<endl;
      }
};

car::car()
{
    cout<<"outside declare"; 
}


int main()
{

    car c1; 
    car c2(5,6);


}

