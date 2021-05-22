// For review purposes only! Does not represent the actual solution!!

#include <iostream>
#include <stdio.h>

using namespace std;        //std::

//method declaration

int main(void) {

    //Variable Initialisation (stack)
    int x = 5;

    //References '&' (aliasing)
    int& y = x;
    
    y++;
    cout<<x<<endl;
    cout<<y<<endl;
    x--;
    cout<<x<<endl;
    cout<<y<<endl;
    
    //Pointers '*'

    //Variable Initialisation (stack)

    //Pass-by-value

    //Pass-by-reference

    //Pass-by-address

    return 0;
}

//method implementation


//Note:
//These fundamental concepts can be applied across all data types
//ie. primitive and user-defined
//https://www.programiz.com/cpp-programming/data-types
