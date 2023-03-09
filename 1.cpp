/* WAP to convert the polar coordinates into rectangle coordinates
hint:polar co-ordinates(radius,angle) and rectangular coordinates(x,y) where x=r*cos(angle) and y=r*sin(angle) */
#include <iostream>
#include <math.h>
using namespace std;
class Rectangle
{
    float xco;
    float yco;

public:
    Rectangle()
    {
    }
    Rectangle(float x, float y)
    {
        xco = x;
        yco = y;
    }
    void display()
    {
        cout << "(" << xco << "," << yco << ")" << endl;
    }
};
class Polar
{
    float radius;
    float angle;

public:
    Polar()
    {
    }
    Polar(float r, float a)
    {
        radius = r;
        angle = a;
    }
    void display()
    {
        cout << "(" << radius << "," << angle << ")" << endl;
    }
    operator Rectangle()
    {
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        return Rectangle(x, y);
    }
};
int main()
{
    Polar p(10.0, 0.758539);
    Rectangle r;
    r = p;
    cout << "Polar coordinates=";

    p.display();
    cout << "Rectangular coordinates  =";
    r.display();
    return 0;
}