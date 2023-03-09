#include <iostream>
using namespace std;

template <typename T>
T getMax(T a, T b)
{
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main()
{
    int x = 10, y = 20;
    cout << "Max of " << x << " and " << y << " is " << getMax(x, y) << endl;

    float a = 1.23, b = 4.56;
    cout << "Max of " << a << " and " << b << " is " << getMax(a, b) << endl;

    char c = 'a', d = 'A';
    cout << "Max of " << c << " and " << d << " is " << getMax(c, d) << endl;

    return 0;
}
