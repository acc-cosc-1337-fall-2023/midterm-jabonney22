#include "question3.h"
#include <iostream>

using std::string; using std::cout; using std::cin; using namespace std;

int main()
{
    string palindrome;
    string result;

    cout<<"Enter a palindrome: ";
    cin>>palindrome;

    result = is_palindrome(palindrome);

    if(is_palindrome(palindrome) = true){

        cout<<result<<"Is a Palindrome";

    }

    else{

        cout<<result<<"Is not a Palindrome";
    
    }


    return 0;
}