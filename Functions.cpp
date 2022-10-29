#include <iostream>     // Name of prewritten code, library
#include <cmath>        // Math Library
                        // C++ In one program, write 3 separate functions

using namespace std;    // Command to avoid typing std::

    int squareIntegers( int x); // Prototypes
    double squareDouble( double d);
    float squareFloat ( float f);

int main() {            // All programs start at ‘main
    cout << "Dinar Ibragim - 09/04/22"<< endl;
    
    cout << squareIntegers(6) << endl;
    cout << squareDouble(6.9) << endl;
    cout << squareDouble(9.1) << endl;
   
    
    return 0;           // End program
}

int squareIntegers( int x) {
    int square = 6;
    square = x * x;
    return square;
}

double squareDouble( double d) {
    double square = 6.9;
    square = d * d;
    return square;
}

float squareFloat ( float f) {
    float square = 9.1;
    square = f * f;
    return square;
}
