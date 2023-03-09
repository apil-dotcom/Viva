/*Write a program to add two complex numbers. Your program should have three
objects. Each object contains two attributes (i.e real and imaginary part). Now add
each attribute and save them into third object separately. Use the concept of ‘+’
operator overloading.*/
#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator+(Complex c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    void print()
    {
        cout << "(" << real << " + " << imag << "i)" << endl;
    }
};

int main()
{

    Complex c1(1, 2);
    Complex c2(3, 4);

    Complex c3 = c1 + c2;

    cout << "c1 + c2 = ";
    c3.print();

    return 0;
}
