#include <iostream> 
using namespace std ; 

int main() 
{
    int number , number1 ; 
    char condition = '-' ; 
    cout << "Enter one number : " << endl ;
    cin >> number ; 
    number1 = number ; 
    
    while (condition == '-')
    {
        if (number > number1 ) { 
            number1 = number ; 
        }
        cout << "break = any key  , contniue = '-' : " << endl; 
        cin >> condition  ;
        cout << "Enter one number : " << endl ;
        cin >> number ;


    }
    cout << "big numbe is : " << number1 ; 
    


    return 0 ; 
}