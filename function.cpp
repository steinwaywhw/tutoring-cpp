#include <iostream>


using namespace std;


double find_delta(double a, double b, double c) {
    double delta = b * b - 4 * a * c;
    return delta; // return delta to caller
}

// void means return nothing
void myswap(int, int); // functino declaration

// call by reference
// function definition
void myswap2(int &a, int &b) {
    
    int temp; // variable definition
    temp = a; // assignment statement
    
    a = b; 
    b = temp; 
    // nothing to return
}


/*
    entry point for every program
*/
int main(int argc, char **argv) {
    
    int x = 1; //variable definition and assignment
    int y = 2;
    
    cout << x << " " << y << endl;
    
   
    // call myswap with x and y
    myswap2(x, y); // function call statement
    
    
    
    cout << x << " " << y << endl;
    
}


// call by value
// a is a copy of x, b is a copy of y
void myswap(int a, int b) {
    
    a = b;
    b = a;
    
}
