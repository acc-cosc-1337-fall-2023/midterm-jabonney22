#include<iostream>
#include"question2.h"

using std::cin; using std::cout; using std::string;

int main()
{

    double result;
    double mass;
    double velocity;
    

    cout<<"Enter a value for mass: ";
    cin>>mass;

    cout<<"Enter a value for velocity: ";
    cin>>velocity;

    result = get_kinetic_energy(mass, velocity);

    cout<<"Kinetic energy is: "<<result<<"\n";

    return 0;
}