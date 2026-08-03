
#include <iostream>
using namespace std; 

int main()
{

    string food = "Dhosha "; 
    string &meal = food;

    string &khana = meal; 

    cout<<"food: "<<food<<endl; 
    cout<<"Meal: "<<meal<<endl; 
    cout<<"khana: "<<khana<<endl; 
    //pointer

    string *ptr = &food; 
    cout<<"ptr: " <<ptr; 
    
}