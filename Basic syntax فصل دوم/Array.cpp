#include <iostream> 
using namespace std ; 

int main () { 

    // definition Array 
    int number[5] ;
    for (int i = 0 ; i < 5 ; i++ ) 
    {
        cout << "number[" << i << "]=" << number[i] << endl;  
    } 
    cout << "------------------------------------------" << endl ;
    int Number[] = {1,2,3} ; 
    for (int i = 0 ; i < 5 ; i++ ) 
    {
        cout << "number[" << i << "]=" << Number[i] << endl;  
    } 
    cout << "------------------------------------------" << endl ; 
    
    int NUmber[5] = {1,2,3,4}; 
    for (int i = 0 ; i < 5 ; i++ ) 
    {
        cout << "number[" << i << "]=" << NUmber[i] << endl;  
    } 
    cout << "------------------------------------------" << endl ;

    double NUMBer[5] = {}; 
    for (int i = 0 ; i < 5 ; i++ ) 
    {
        cout << "number[" << i << "]=" << NUMBer[i] << endl;  
    } 
    cout << "------------------------------------------" << endl ;

    // input the 5 score  and save frome the array and fine the minimum the score 

    double score[5] ;
    double  fotable ; 
    cout << "you must be enter 5 score :" << endl; 
    for (int i = 0 ; i < 5 ; i++ ) 
    {
        cout << "enter one score[" << i << "]:" << endl; 
        cin >> score[i] ; 

    } 
    cout << "this line " << endl; 
    for (int i = 0 ; i < 5 ; i++ )
    {
            fotable = score[0] ; 
            if (score[i] < fotable )
            {
                fotable = score[i] ; 
                cout << "minimum score is :" << fotable << endl; 
                break ; 
            }
    }
        
    
    cout << "your minimum score :" << endl; 
    cout << fotable << endl; 

    
    return 0 ; 
}