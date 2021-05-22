// For review purposes only! Does not represent the actual solution!!

#include <iostream>
#include <stdio.h>

using namespace std;        //std::

//method declaration
void square_v1 (int n);
void square_v2 (int& n);
void square_v3 (int* n);

int main(void) {

    //Variable Initialisation (stack)
    int x = 5;

    //References '&' (aliasing)
    int& y = x;
    
    y++;
    cout<<x<<endl; //6
    cout<<y<<endl; //6
    x--;
    cout<<x<<endl; //5
    cout<<y<<endl; //5

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
    square_v1 (x); //pass the value of x
    cout<<x<<endl;

    //Pass-by-reference
    square_v2 (x); //pass a reference to x
    cout<<x<<endl;
    
    //Pass-by-address
    square_v3 (&x); //pass the address of x
    cout<<x<<endl;

    return 0;
}

//method implementation
void square_v1 (int n) {
    n = n * n;
}

void square_v2 (int& n) {
    n = n * n;
}

void square_v3 (int* n) {
    *n = *n * *n;
}

//Note:
//These fundamental concepts can be applied across all data types
//ie. primitive and user-defined
//https://www.programiz.com/cpp-programming/data-types
