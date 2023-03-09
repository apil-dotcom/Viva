/*Write a program to demonstrate ‘+ +’  operator overloading.*/
  /*1 ++ Operator*/
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
    
    A operator++()
    {
        A temp;
        temp.x = ++x;
        return temp;
    }
    void display()
    {
        cout << "The value of x is:" << x << endl;
    }
};
int main()
{
    A obj1(6), obj2;
    obj1.display();
    obj2 = ++obj1;
    obj1.display();
    obj2.display();
    return 0;
}