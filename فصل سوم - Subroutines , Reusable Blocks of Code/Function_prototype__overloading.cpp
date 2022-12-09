#include <iostream>
using namespace std ; 
void print(int number ) 
{
    cout << "your number is integer : " << number ; 
    cout << endl; 
}

void print (double number ) 
{
    cout << "your number is double :" << number << endl; 
}
int main () 
{
    int age = 20 ; 
    double score = 18.5 ; 

    print (age) ; 
    print(score) ; 

    print(3.14) ; 
    print(3) ; 
    return 0 ; 
}