/* Write a program to illustrate the concept of exception handling */
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    c = a + b;
    d = a - b;

    try
    {
        if (d != 0)
        {
            cout << " Result (c/d) = " << c / d << endl;
        }
        else
        {
            throw(d);
        }
    }
    catch (int x)
    {
        cout << "Exception caught: " << endl;
    }

    return 0;
}
