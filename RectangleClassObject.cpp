#include <iostream>     // Name of prewritten code, library
#include <string>

using namespace std;    // Command to avoid typing std::

class Rectangle {
    private:
    int width, height;
    
    public:
    void set_values (int,int);
    int area() {
        int answer;
        answer = width * height;
        return answer;
    }
};

void Rectangle::set_values (int x, int y) {
    width = x;
    height = y;
}

int main() {            // All programs start at ‘main'
    
    cout << "Dinar Ibragim - Program Name: Rectangle - Date: 09/11/22" << endl;
    // Use set_values function to set values
    Rectangle rect1;
    rect1.set_values (5,6);
    cout << "area: " << rect1.area() << endl;
    
    Rectangle rect2;
    rect2.set_values (3,4);
    cout << "area: " << rect2.area() << endl;

    return 0;           // End program
    }
