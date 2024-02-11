#include <iostream>

using namespace std;

int main() {
    int x = 33;
    double D = 3.14;
    char C = 'a';
    // Declare and initialize pointer prtInt to NULL
    int * ptrInt = NULL;
    double * ptrDouble = NULL;
    char * ptrChar = NULL;
    // Declare variable that can hold a pointer to an integer variable
    ptrInt = &x;
    ptrDouble = &D;
    ptrChar = &C;
    // The CONTENT of the variable ptrInt, points to a memory location of 4 bytes.
    cout << "Content of x: " << x << endl;
    cout << "Address of &x: " << &x << endl;
    cout << "Contents of D: " << D << endl;
    cout << "Address of D: " << &D << endl;
    cout << "Contents of C: " << C << endl;
    cout << "Address of C: " << (void*)&C << endl;
    return 0;
}