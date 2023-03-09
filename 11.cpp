/*1. Write a program to illustrate the concept of run-time polymorphism/virtual
function.
*/
#include <iostream>

using namespace std;

// Shape class
class Shape {
public:
    virtual void draw() { // Virtual function
        cout << "Drawing Shape" << endl;
    }
};


class Rectangle : public Shape {
public:
    void draw() { 
        cout << "Drawing Rectangle" << endl;
    }
};


class Circle : public Shape {
public:
    void draw() { 
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Shape* shape;
    Rectangle rect; 
    Circle circle; 
    
    shape = &rect; 
    shape->draw(); 
    
    shape = &circle; 
    shape->draw(); 
    
    return 0;
}
