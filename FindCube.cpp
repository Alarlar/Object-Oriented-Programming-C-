#include <iostream>     // Name of prewritten code, library
                        // C++ Program to Find Cube of a Number
using namespace std;    // Command to avoid typing std::

int main() {            // All programs start at ‘main
    cout << "Dinar Ibragim - 08/28/22"<< endl;
    int n = 0, cube = 0;          // Declare and initialize variable
    cout << "Enter a number: ";     //  Prompts the user to type in an integer number
    cin >> n;                     // Pause and wait for user to Input number
    
    cube = n * n * n;               // Finding cube
    cout << "Cube of " << n << " is: " << cube << endl; // Prints out the value of N*N*N
    
    return 0;           // End program
}
