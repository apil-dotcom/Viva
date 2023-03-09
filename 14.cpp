/*Write program example to demonstrate function overloading and function
overriding.*/
#include <iostream>
using namespace std;

// Function Overloading
int add(int a, int b)
{
    return a + b;
}

double add(double a, double b, double c)
{
    return a + b + c;
}

// Function Overriding
class Animal
{
public:
    virtual void makeSound()
    {
        cout << "The animal makes a sound.\n";
    }
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "The dog barks.\n";
    }
};

int main()
{
    // Function Overloading
    cout << "Int sum: " << add(1, 2) << endl;
    cout << "Double sum: " << add(2.55, 3.6, 5) << endl;

    Animal obj1;
    obj1.makeSound();
    Dog obj2;
    obj2.makeSound();

    return 0;
}
