#include <iostream> 
using namespace std ; 

int main() 
{
    int Array[4][4] = {{0,1,2,3},{0,1,2,3},{0,1,2,3}}; 
    int Array1[4][4] = {{0,1,2,3},{0,1,2,3},{0,1,2,3}} ;

  
    for (int i = 0 ; i <= 2 ; i++) 
    {
        for (int j = 0 ; j <=2  ;j++ ) {
            cout << Array[i][j] + Array1[i][j] << " " ; 
        }
        cout << endl; 
    }

    return 0 ; 
}