/*Write a program to demonstrate ‘- -’ operator overloading.*/
 #include <iostream>
using namespace std;
class A
{
    int x;

public:
    A()
    {
    }
    A(int a)
    {
        x = a;
    }
    void display()
    {
        cout << "The value of x is:" << x << endl;
    }
    A operator--()
    {
        A temp;
        temp.x = --x;
        return temp;
    }
};
int main()
{
    A obj1(6), obj2;
    obj1.display();
    obj2 = --obj1;
    obj2.display();
    return 0;
}