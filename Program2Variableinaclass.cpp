#include <iostream>     // Name of prewritten code, library
#include <string>

using namespace std;    // Command to avoid typing std::

class BuckysClass{
    public:
    void setName(string x){
        name = x;
    }
    string getName(){
        return name;
    }
    
    private:
        string name;
};

int main() {            // All programs start at ‘main'
    
    cout << "Dinar Ibragim - Program Name: Variable in a class - Date: 09/11/22" <<endl;
    
    BuckysClass bo;
    bo.setName("Sir Bucky Wallace");
    cout << bo.getName() << endl;
    
return 0;           // End program
}
