#include <iostream> 
using namespace std ; 

int main() 
{
    int i ; 
    cout << "how many do you have ? " << endl; 
    cin >> i ; 
    double Array[i-1] ; 
    cout << "Enter your number : " << endl ; 

    for (int j = i-1  ; j >= 0 ; i-- ) 
    { 
        cin >> Array[i] ; 
    }
    
    


    return 0 ; 
}