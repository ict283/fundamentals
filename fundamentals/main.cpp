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
    
    
    // References '&'
    int& y = x;                //aliasing
    
    y++;
    cout<<x<<endl;
    cout<<y<<endl;
    x--;
    cout<<x<<endl;
    cout<<y<<endl;
    
    
    // Pointers '*'
    int* p1 = &x;             //pointer to 'stack' memory
    cout<<&x<<endl;         //memory address of variable x
    cout<<p1<<endl;         //address stored in p1
    cout<<*p1<<endl;        //value store at p1's address
    
    int* p2 = new int;     //Variable Initialisation (heap)
    *p2 = 10;                //store value at memory address
    cout<<p2<<endl;        //address stored in p2
    cout<<*p2<<endl;       //value store at p2's address
    
    
    // Pass-by-value
    square_v1(x);
    cout<<x<<endl;
    
    
    // Pass-by-reference
    square_v2(x);
    cout<<x<<endl;
    
    
    // Pass-by-address
    square_v3(&x);
    cout<<x<<endl;
    
    return 0;
}


//method implementation

void square_v1 (int n) {
    n=n*n;
}

void square_v2 (int& n) {
    n=n*n;
}

void square_v3 (int* n) {
    *n = *n * *n;
}

//References
//https://www.programiz.com/cpp-programming/data-types
