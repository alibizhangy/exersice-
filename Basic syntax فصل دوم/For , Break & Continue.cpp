#include <iostream>
using namespace std ;

int main ()
{
    // for (initializer ; conditional ;increas)
    // {
    //     block code 
    // }
    // one initioalize run ; 
    // two go to condition and chekc this 
    // tree  go to block code and run it 
    // foure go to the inceas and run it 
    // five and back to the condition and check 
    // five and four start again befor condition going to fail 
    
    // question ; 
    // program for check number one to ten and write the even 
    cout << "this block is even {" << endl; 
    for (int i = 0 ; i <= 10 ; i+=2  )
    {
        cout << "your number is : [" << i << "]" ;
        cout << endl; 
        if (i == 6 ){
            cout << "contiue\n" ;
            continue; 
        }
         
    }

    cout << "}\nthis block is all number { " << endl; 
    // this prgram write the number one to ten 
      for (int i = 0 ; i <= 10 ; i++  )
    {
        cout << "your number is : [" << i << "]" ;
        cout << endl; 
        if (i == 5 ) 
        {
            cout << "break" ; 
            break ; 
        }
    }
    cout << "\n}";

    return 0 ; 
}