#include <iostream>
using namespace std ; 

int main ()
{
    int number ; 
    cout << "Enter a number : " << endl; 
    cin >> number ; 

    // switch (expression)
    // {
    // case /* constant-expression */:
    //     /* code */
    //     break;
    
    // default:
    //     break;
    // }
    switch (number)
    {
    case 1:
        cout << "one" << endl; 
        break;
    case 2: 
        cout << "two" << endl; 
        break ; 
    case 3:
        cout << "three" << endl; 
    case 4: 
        cout << "four" << endl; 
    
    default:
        cout << "your input invalide" << endl; 
        break;
    }
    


    return 0 ; 

}