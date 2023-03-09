/*. Write a c++ program to show the use of pure polymorphism/pure virtual functions*/
#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void draw() = 0;
};
class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "This is Rectangle" << endl;
    }
};
    class Circle : public Shape
    {
    public:
        void draw()
        {
            cout << "This is Circle" << endl;
        }
    };
    int main()
    {
        Shape *shape1 = new Rectangle();
        Shape *shape2 = new Circle();

        shape1->draw();
        shape2->draw();
        
        delete shape1;
        delete shape2;


        return 0;
    }


    //0R
    /* . Write a program to show the use of pure polymorphism/pure virtual functions*/
/* #include <iostream>
using namespace std;

// Define a base class Shape
class Shape {
public:
    // Declare a pure virtual function to compute the area of a shape
    virtual double area()  = 0;
};

// Define a derived class Rectangle
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Override the pure virtual function to compute the area of a rectangle
    double area()  {
        return width * height;
    }
};

// Define another derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Override the pure virtual function to compute the area of a circle
    double area()  {
        return 3.14159 * radius * radius;
    }
};

int main() {
    // Declare a Shape pointer and allocate memory for a Rectangle object
    Shape* ptr = new Rectangle(5, 7);

    // Call the area() function on the Shape pointer, which will invoke the Rectangle's area() function
    cout << "The area of the rectangle is " << ptr->area() << endl;

    // Delete the allocated memory
    delete ptr;

    // Declare another Shape pointer and allocate memory for a Circle object
    ptr = new Circle(3);

    // Call the area() function on the Shape pointer, which will invoke the Circle's area() function
    cout << "The area of the circle is " << ptr->area() << endl;

    // Delete the allocated memory
    delete ptr;

    return 0;
} */
