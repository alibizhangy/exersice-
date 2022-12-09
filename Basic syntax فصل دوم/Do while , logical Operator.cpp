#include <iostream>
using namespace std ;

int main ()
{   
    // do while 
    int password ; 
    cout << "enter your password :" ; 
    cin >> password ; 
    while (password != 123) {
        cout << "password is not correct try again " << endl; 
        cout << "enter your password :" ;
        cin >> password ;
    }
    cout << "Your password is correct welldown \n" ; 

    int password2 ; 
    // do while run one more while 
    do {
        cout << "enter your password :" ; 
        cin >> password2;
    } while (password2 != 123);
    cout << "welldown your pass is correct " << endl; 










    // and , or and not logical operator 
    // && , || , !() = tree logical operator 

    
    return 0 ; 
}