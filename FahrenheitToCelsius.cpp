#include <iostream>     // Name of prewritten code, library
                        // C++ Temperature Conversion program.
using namespace std;    // Command to avoid typing std::

int main() {            // All programs start at ‘main
    cout << "Dinar Ibragim - 09/04/22"<< endl;
    
    // Declare variables
    int choice, tempIn, tempOut;
    
    //   Prompt the user to choose Centigrade to Fahrenheit,  Fahrenheit to centigrade.
    cout << "Type 1 to convert Fahrenheit to Centigrade,"<<" "<< "2 to convert Centigrade to Fahrenheit: " <<endl;
    cin >> choice;

    // if true, then ends here, if false drop to next line
    if(choice == 1) // Criteria value
    {
        cout<<"Enter temperature in Fahrenheit: ";
        cin>>tempOut;
        tempIn=(tempOut - 32)*5/9; // Calculate
        cout<<"In Centigrade that is "<<tempIn<<endl;
    }
    else if(choice == 2)
    {
        cout<<"Enter temperature in Centigrade: ";
        cin>>tempIn;
        tempOut=(tempIn*9/5)+32; //Calculate tempIn
        cout<<"In Fahrenheit that is "<<tempOut<<endl;
    }
    else
    {
        cout<<"Invalid input."; // done.
    }
    
    
    return 0;           // End program
}
