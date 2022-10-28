#include <iostream>     // Name of prewritten code, library
                        // C++ Program Use array
using namespace std;    // Command to avoid typing std::

int main() {            // All programs start at ‘main
    cout << "Dinar Ibragim - 08/28/22"<< endl;
    
    int numbers[6] = { 65, 43, 76, 32, 12, 58};   // Declare array of 6 integers and initializate
    int i, result = 0, avg;
    
   
    for (int i = 0; i < 6; i++) { // Loop that add all numbers
        result += numbers[i];
    }
    cout << "The sum of numbers: " << result << endl;
    
    i = sizeof(numbers) / sizeof(numbers[0]); // Formula that give average result
    avg = result / i;
    cout<<"Average of all array elements is: "<<avg << endl;
    
    return 0;           // End program
}

