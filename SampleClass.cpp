#include <iostream>     // Name of prewritten code, library
#include <string>

using namespace std;    // Command to avoid typing std::

// STEP 1 - DEFINE THE new datatype/Class  'aThing'

class aThing {   // Public means that is can be access in step 3 with the dot notation
    public:
    double getWeight(void){ // public functions  accessible by dot notation
        return weight;
    }
    void setWeight(double inWeight){
        weight = inWeight;
    }
private:  // Private means that it can NOT be accessed with the dot notation, but indirectly with a public function
    double weight; // private variables only accessible by a function
};

int main() {            // All programs start at ‘main'
    
    cout << "Dinar Ibragim - Program Name: Sample Class  - Date: 09/11/22" <<endl;
    
    // STEP 2 - DECLARATION - USE the new datatype/class 'aThing' in a Declaration statement to create 'ThingOne'.
    
    aThing ThingOne;
    
    // STEP 3 - Use the OBJECT defined in step 2 - With dot notation
    
    ThingOne.setWeight(110);
    
    cout << "Use Function/Method get Weight - "<< "Weight is: " << ThingOne.getWeight() << endl;
    
    return 0;           // End program
    }
