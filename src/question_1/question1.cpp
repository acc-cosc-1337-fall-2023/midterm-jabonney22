#include "question1.h"
#include <iostream>
#include <cstdlib>

bool test_config()
{
    return true;
}
int roll_die(){

    int result;
    
    srand(time(0)); 

    do{
    result = rand() % 6 + 1;
    
    } while(result < 1 || result > 6);

    return result;
    
}
