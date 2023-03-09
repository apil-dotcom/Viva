/*Write a program to overload operator (<) that compares between two objects.*/
#include <iostream>
using namespace std;
class maximum
{
    int x;
    public:
    maximum(int a)
    {
        x = a;
    }
    maximum operator>(maximum obj)
    {
        if (x > obj.x)
        {
            cout << "Maximum number is:" << x << endl;
        }
        else
        {
            cout << "Maximum number is:" << obj.x << endl;
        }
    }
};
int main()
{
    maximum m1(3), m2(5);
    m1 > m2;
    return 0;
}