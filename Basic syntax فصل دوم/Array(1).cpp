#include <iostream>
using namespace std ; 

int main () 
{
    double scores[5] ; 
    cout << "Enter the score : " << endl; 
    for (int i = 0 ; i < 5  ; i++ ) 
    {
        cin >> scores[i] ; 
    }
    double minimumscore = scores[0] ; 
    for (int i = 0 ; i < 5 ; i++ ) 
    {
        if (scores[i] < minimumscore ) 
        {
            minimumscore = scores[i] ; 
        }
    }
    cout << "The minimus score is : " << minimumscore << endl; 


    return 0 ; 
}