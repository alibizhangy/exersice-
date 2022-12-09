#include <iostream> 
using namespace std ; 

int main ()
{
    // // how to in put the variable 
    // // this syntax for cin 
    // int age = 20  ;
    // double score = 18.5 ;
    // cout << "enter your age and score  : " ; 
    // cin >> age >> score ; 
    // cout << "your age and score is  : " << age << " " << score << endl ; 
    
    // // arithmatic operator 
    
    // //int x , y  ;
    // //double x , y ; 
    // float x , y ;
    // cout << "enter two number : " << endl; 

    // cin >> x >> y ; 
    // cout << x + y << endl; 
    // cout << x - y << endl; 
    // cout << x * y << endl;
    // cout << x / y << endl; 

    int z ; 
    cout << "enter a number : " << endl; 
    cin >> z ; 

    cout << "your number : " << ++z ;
    cout << endl;  
    cout << "your number : " << z++ ;
    cout << endl;
    cout << "your number is : " << z << endl ;

    z++ ; // x = x + 1 ; 
    cout << "your number :" << z ; 
    cout << endl ;

    ++z ; 
    cout << "your number :" << z ; 
    cout << endl ;
     

    int a ; 
    int b ; 
    cout << "enter one number : " ; 
    cin >> a  ;
    
    b = a++ ; 
    cout << a << " " << b << endl; 
    
    int c ; 
    cout << "enter one number for %10 : " << endl; 
    cin >> c ; 
    cout << c % 10 << endl; 

    return 0 ; 
}