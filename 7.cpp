/*Write a function template to find the product of two integers and floats. */

 #include <iostream>
using namespace std;

template <class T>
T getProduct(T a, T b)
{
  return a*b;
}

int main()
{
    int x = 5, y = 6;
    cout << "Product  of " << x << " and " << y << " is " << getProduct(x, y) << endl;

    float a = 1.23, b = 4.56;
    cout << "Product of " << a << " and " << b << " is " << getProduct(a, b) << endl;

    return 0;
}

 