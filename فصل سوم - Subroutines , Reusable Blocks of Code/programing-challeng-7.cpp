#include <iostream>
using namespace std ; 

int smaller_number (int Number1 , int Number2 ) 
{
    if ( Number1 < Number2 ) {
        cout << "Number1 is smaller :"<< endl; 
        return Number1 ; 
    }else if (Number2 < Number1 ){
        cout << "Number2 is smaller :" << endl; 
        return Number2 ; 
    }
}

int main () 
{
    int Num1 , Num2 ; 
    Num1 = 20 ; 
    Num2 = 10 ; 

    cout << "start the Function " << endl; 
    cout << smaller_number(Num1 , Num2 ) << endl;
    cout << "end the Function " << endl;  
    return 0 ; 
}