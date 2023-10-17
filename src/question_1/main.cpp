#include<iostream>
#include"question1.h"

using std::cin; using std::cout; using std::string;

int main()
{

string input;

    for (int i = 0; i < 10; i++){    
       
            cout<<"Select y or Y if you would like to run the program: ";
            cin>>input;
            if(input == "y" || "Y"){
                int result = roll_die();
                cout << "The rolled die value is: " << result << "\n";

            }

            else {
                cout<<"Program will now end.";
                break;
            
            }
    }
   return 0;
}