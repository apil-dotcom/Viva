/* wap to read the length of a whitwboard in feet and icnhes and convert it into meter and cm using user-defined to user-defined
type conversion*/
#include <iostream>
using namespace std;
class fi
{
    float feet;
    float inch;

public:
    void getData(float x, float y)
    {
        feet = x;
        inch = y;
    }
    float rf()
    {
        return feet;
    }

    float ri()
    {
        return inch;
    }
};
class mcm
{ // meter  cm
    int meter;
    float cm;

public:
    mcm()
    {
    }
    mcm(fi obj)
    {
        float a = obj.rf();
        float b = obj.ri();
        float f = a + b / 12.0;
        float m = f / 3.3;
        meter = int(m);
        cm = (m - meter) * 100;
    }
    void display()
    {
        cout << meter << " meter and " << cm << "cm" << endl;
    }
};
int main()
{
    fi obj;
    obj.getData(4, 5);
    mcm obj2;
    obj2 = obj;

    obj2.display();
}
