#include <iostream> 

int main ()
{
    float score ; 
    std :: cout << "enter your score : \n" ; 
    std :: cin >> score ; 

    // rerational operator 
    // condition and if statemanets 
    // if (condiiton) 
    // { block of code } 
    // if condition is true run block code 
    

    if (score >= 12 ) { 
        std :: cout << "Great! you pass \n" ; 

    }
    //or 
    if (score >= 12 ) 
        std :: cout << "Great** your pass \n" ; 
    
    // if (condition) {
    //     block one 
    // }else {
    //     block 2 
    // }
    // if condition is fail 
    // Go to run block 2 
    if ( score >= 12 ) {
        std :: cout << "Great** your pass \n" ;
    }else {
        std :: cout << "OOH you fail !!!!\n" ; 
    }
    // for example 
    if (score <= 12) {
        std :: cout << "Great  your pass \n" ;
    } else if (score <= 15){
        std :: cout << "your score is F and your are pass \n " ; 
    } else if (score <= 18 ) { 
        std :: cout << "Great your score is B and your are passed \n" ; 
    } else if (score <= 19  ) {
        std :: cout << "Great your score is A \n" ; 
    } else if (score >= 19.5 ) {
        std :: cout << "Great your score is A+\n" ; 
    }
    



    return 0 ;
}