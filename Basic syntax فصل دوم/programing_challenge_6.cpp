#include <iostream> 
using namespace std ; 

int main() 
{
    int Number1 , Number2 ; 
    char operand ; 
    cout << "Enter two number : " << endl; 

    cout << "Enter Number1 : " ; 
    cin >> Number1 ; 
    cout << endl; 
    
    cout << "Enter number2 : " ; 
    cin >> Number2 ; 
    cout << endl; 

    cout << "Enter your operator {'+' , '-' , '*' , '/' } :  " ;
    cin >> operand ; 

    switch (operand)  {
        case '+' : 
            cout << "Number1 + Number2 = " << Number1 + Number2 << endl ; 
            break ; 
        case '-' : 
            cout << "Number1 - Number2 = " << Number1 - Number2 << endl; 
            break ; 
        case '*' : 
            cout << "Number1 * Number2 = " << Number1 * Number2 << endl; 
            break ; 
        case '/' : 
            if (Number2 != 0 )
            {cout << "Number1 / Number2 = " << Number1 / Number2 << endl; }
            else {
                cout << "is not valide" << endl; 
            }
            break ; 
        default : 
            cout << "your operator is not valid " << endl; 
    }



    return 0 ; 
}