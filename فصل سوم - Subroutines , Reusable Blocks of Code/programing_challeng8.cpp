#include <iostream>
using namespace std ;

double calculate (int num1 , int num2 , char operand ); 
int main () 
{
    cout << "start initialization number " << endl; 
    int Number1 = 10 , Number2 = 5 ; 
    cout << "start initialization operator " << endl; 
    char operand = '/'  ;

    cout << "call  the Function and send the value" << endl ;
    calculate(Number1, Number2 , operand ) ; 



    
    return 0 ; 
}

double calculate (int num1 , int num2 , char operand )
{
    switch (operand)
    {
    case '+' :
        cout << num1 + num2 << endl; 
        break;
    case '-' : 
        cout << num1 - num2 ; 
        cout << endl; 
        break ; 

    case '*' :
        cout << num1 * num2 ; 
        cout << endl;
        break ; 

    case '/' :
        if (num2 != 0 ) 
        {
            cout << num1 / num2 ; 
            cout << endl; 
        } 
        break ; 
    
    default:
        cout << "your operator is not valide" << endl; 
        break;
    }
}