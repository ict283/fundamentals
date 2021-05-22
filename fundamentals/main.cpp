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
    int* p1 = &x;
    cout<<&x<<endl;  //address of x
    cout<<p1<<endl;  //address stored in p1
    cout<<*p1<<endl; //value store at p1's address

    //Variable Initialisation (heap)
    int* p2 = new int;
    *p2 = 10;           //store value at memory address
    cout<<p2<<endl;   //address stored in p2
    cout<<*p2<<endl;  //value stored at p2's address
    
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
