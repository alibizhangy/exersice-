#include<iostream> 
using namespace std; 
// type name (parameter1 , parameter2 )
// {
//     return value ; 
// }
// definitions new function 
int getminimumvalue1 (int num1 , int num2 ) 
{
    int minimumnumber; 
    if (num1 > num2 ) 
    {
        minimumnumber = num2 ; 
        // out put is not valid 
    }else {
        minimumnumber = num1 ; 
        // out put is not valid 
    } 
    return minimumnumber ; 

}
int getminimumvalue2 (int num1 , int num2 ) 
{
    int minimumnumber; 
    if (num1 > num2 ) 
    {
        minimumnumber = num2 ; 
        // out put is not valid 
        return minimumnumber ; 

    }else {
        minimumnumber = num1 ; 
        // out put is not valid 
        return minimumnumber ; 
    } 

}
void getminimumvalue3 (int num1 , int num2 ) 
{
    int minimumnumber; 
    if (num1 > num2 ) 
    {
        minimumnumber = num2 ; 
        cout << "minimum number is : " << minimumnumber ;// this not valid 
    }else {
        minimumnumber = num1 ; 
        cout << "minimum number is : " << minimumnumber ;// this not valid
    } 

}

int main () 
{
    int number1 , number2 ; 
    cout << "Enter two number : " << endl; 
    cin >> number1 >> number2 ;
    
    int minimumnumber ; 

    if (number1 > number2 ) 
    {
        minimumnumber = number2 ; 
        cout << "minimum number is : " << minimumnumber ;
        cout << endl; 
    }else {
        minimumnumber = number1 ; 
        cout << "minimum number is : " << minimumnumber ; 
        cout << endl; 
    } 
    // int function have one exite statemanet and you can use this 
    cout << "get minimum value1 " ;
    minimumnumber = getminimumvalue1(number1 , number2) ;  
    cout << minimumnumber << endl; 
    // out put with two return  
    cout << "get minimum value2 " ;
    cout << getminimumvalue2(number1,number2) << endl; 

    // out put without return value 
    cout << "get minimum value 3 :" << endl;  
    getminimumvalue3(number1,number2) ;
    cout << endl; 

    
    cout << endl; 




    
    
    
    return  0 ; 

}