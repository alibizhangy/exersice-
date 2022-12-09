#include <iostream> 
using namespace std ;

int main () 
{
    int x ; 
 
    cout << "enter one number : " ; 
    cin >> x  ;

    // x = x + 1 => x += 1 ;
    // همین فرمت رو میتونید روی بقیه عملگر ها هم اعمال کنید 


    cout << (x += 1) << endl; 
    // or do this 
    x += 1 ; 
    cout << x << endl; 

    x *= 1  ; 
    cout << x << endl; 

    x /= 2 ; 
    cout << x << endl; 

    x -= 1 ; 
    cout << x << endl; 

    a %= 10 ; // this operator definition from integer 
    cout << x << endl; 
    double x ; 
    cout << "enter one number" << endl ;

    cin >> x ; 
    x %= 10 ; 
    cout << x << endl; 


    return 0 ; 
}