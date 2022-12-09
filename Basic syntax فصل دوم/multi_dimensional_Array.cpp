#include<iostream>
using namespace std ; 

int main () {
    // definition array 
    // type_variable variable_name [n][m] ; 

    int matrix [4][4] = { 
        { 10,20,30,40 },
        { 11,21,31,41 },
        { 12,22,32,42 },
        { 13,23,33,43 }
    }; 
    cout << "matrix[2][3]=" << matrix[2][3] << endl; 

    // out put all data matrix 
    for (int i = 0 ; i < 4 ; i++) 
    {
        for (int j = 0 ; j < 4 ; j++){
            cout << "matrix[" << i << "]" ; 
            cout << "[" << j << "] = " ;
            cout << matrix[i][j]  ; 
            cout << endl;  
        }
        cout << endl ;
    }

    for (int i = 0 ; i < 4 ; i++) 
    {
        for (int j = 0 ; j < 4 ; j++){
            cout << matrix[i][j] << " " ; 
        }
        cout << endl; 
    }
    // int put the variable 
    for (int i = 0 ; i < 4 ; i++) 
    {
        for (int j = 0 ; j < 4 ; j++){
            cout << "matrix["<< i << "]" ; 
            cout << "[" << j << "]= " ; 
            cin >> matrix[i][j] ;  
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0 ; 

}