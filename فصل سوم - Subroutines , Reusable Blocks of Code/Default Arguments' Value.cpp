#include<iostream>
using namespace std ;
void print (int number ) 
{
    cout << "your number is number : " << endl ; 
    cout << number ; 
}
// type name_Function (definition value and definition value with first initialize)
int sum (int num1 , int num2 , int num3 = 0 , int num4 = 0 ) 
{
    int sum ; 
    sum = num1 + num2 + num3 + num4 ; 
    return sum  ;
}
int Sum (int num1 = 0  , int num2 = 0 )
{
    int sum ; 
    sum = num1 + num2 ; 
    return sum ; 
}

int main() 
{
    print(4) ; 
    
    //is not valid
    //cout << sum(1) << endl; 
    cout << sum(1,2) << endl; 
    cout << sum(1,2,3) << endl; 
    cout << sum(1,2,3,4) << endl; 

    return 0  ;
}