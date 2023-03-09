/*. Write a program to generate Fibonacci series using ++ operator overloading.*/
#include <iostream>
using namespace std;

class Fibonacci
{
    int current, next;

public:
    Fibonacci()
    {
        current = -1;
        next = 1;
    }

    int operator++()
    {
        int temp = current + next;
        current = next;
        next = temp;
        return temp;
    }
};

int main()
{
    Fibonacci obj;
    for (int i = 0; i < 10; i++)
    {
        cout << ++obj << endl;
    }
    return 0;
}
