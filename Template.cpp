#include <iostream>
using namespace std;
 
template <class T>
class TestValues{
private:
 T answer;
public:
    TestValues() { answer = 0; }
    T valueMin( T inValue1, T inValue2 ) {  // example full function in class
        if (inValue1 >= inValue2)
        {
            return inValue2;
            
        }
    }
    T maxValue( T inValue1, T inValue2 );
    // example header in class, full function outside of class
    bool equalValue( int inValue1, int inValue2 ) {
        if (inValue1 == inValue2)
        {
            return true;
        }
    }
    else {
         return false;
    }
};

int main()
{
 TestValues<int> test1;    // explicit integer
 cout << test1.valueMin(21,3) << endl;
 cout << test1.maxValue(21,3) << endl;
 cout << test1.equalValue(3,3) << endl;
 
 TestValues<double> test2;   // explicit double
 cout << test2.valueMin( 3.14,1.7) << endl;
 cout << test2.maxValue(3.14,14.7) << endl;
 cout << test2.equalValue(1.7, 1.7) << endl;
 
 TestValues<char> test3;   // explicit char
 cout << test3.valueMin( 'a','b') << endl;
 cout << test3.maxValue('a','b') << endl;
 cout << test3.equalValue('a','b') << endl;
 
 system("pause");
 return 0;
}
template <class T>
T TestValues<T>::maxValue( T inValue1, T inValue2 ) {  if (inValue1 <= inValue2) { return inValue2; } }
    
