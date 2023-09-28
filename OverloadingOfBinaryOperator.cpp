/* C++ program to demonstrate the overloading of binary operator by subtracting one complex number from another. */

#include <iostream>
using namespace std;
class Complex
{
private:
    float real;
    float imag;
public:
    Complex(): real(0), imag(0){ }
    void input()
    {
        cout<<"Enter real and imaginary parts respectively: ";
        cin>>real;
        cin>>imag;
    }
    Complex operator - (Complex c2)    // Operator Function (   a    +    bi  ) - (   c    +    di  )
    {                                  //                   (c1.real + c1.imag) - (c2.real + c2.imag)
                                       //                            c1         -         c2
    Complex temp;
        temp.real=real-c2.real; // a - c
        temp.imag=imag-c2.imag; // b - d
        return temp;
    }
    Complex operator + (Complex c2)    /* Operator Function */
    {
        Complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }
    Complex addition(Complex c2)
    {
        Complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }
    Complex operator * (Complex c2)    /* Operator Function */
    {
        Complex temp;
        temp.real = (real * c2.real) - (imag * c2.imag);
        temp.imag = (real * c2.imag) + (imag * c2.real);
        return temp;
    }
    Complex operator / (Complex c2)    /* Operator Function */
    {
        Complex temp;
        temp.real = ((real * c2.real) + (imag * c2.imag)) / (c2.real * c2.real + c2.imag * c2.imag);
        temp.imag = (imag * c2.real - real * c2.imag) / (c2.real * c2.real + c2.imag * c2.imag);
        return temp;
    }
    
    Complex operator ++ () {
        real++;
        imag++;
        Complex temp;
        temp.real = real;
        temp.imag = imag;
        return temp;
    }
    void output()
    {
        if(imag<0)
            cout<<"Output Complex number: "<<real<<imag<<"i";
        else
            cout<<"Output Complex number: "<<real<<"+"<<imag<<"i";
    }
};
int main(){
    cout <<"Dinar Ibragimov - Program: Complex Number class ++ operator part 3 - Date: 11/27/22" << endl;
    
    
    Complex c1, c2, result;
    cout<<"Enter first complex number:\n";
    c1.input();
    cout<<"Enter second complex number:\n";
    c2.input();
    /* In case of operator overloading of binary operators in C++ programming, the object on right hand side of operator is always assumed as argument by compiler. */
    cout << endl << "Addition" << endl;
    result = c1 + c2; /* c2 is furnised as an argument to the operator function. */
    result = c1.addition(c2);
    result.output();

    cout << endl << endl << "Subtration:" << endl;
    result = c1 - c2;
    result.output();

    cout << endl << endl << "Multiplication:" << endl;
    result = c1 * c2;
    result.output();

    cout << endl << endl << "Division:" << endl;
    result = c1 / c2;
    result.output();
    
    cout << endl << endl << "Incrementing the first complex number:" << endl;
    result = ++c1;
    result.output();
    
    cout << endl << endl;
    return 0;
}
