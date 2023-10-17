#include "question3.h"
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using std::string; using std::cout; using std::cin; using namespace std;

bool test_config()
{
    return true;
}

bool is_palindrome(const std::string& palindrome){

  string reverse_palindrome = palindrome;

  reverse(reverse_palindrome.begin(), reverse_palindrome.end());

  if(palindrome == reverse_palindrome){

    return true;

  }

  else{

    return false;
  }

}