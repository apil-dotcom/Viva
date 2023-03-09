/* . WAP to perform the addition of time in hours, minutes and seconds format using friend function */
#include <iostream>
using namespace std;

class time
{
    int hours, minutes, seconds;

public:
    time()
    {
    }
    time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display()
    {
        cout << hours << " hours " << minutes << " minutes " << seconds << " seconds " << endl;
    }

    friend time add(time t1, time t2);
};

time add(time t1, time t2)
{
    time t3;
    t3.seconds = t1.seconds + t2.seconds;
    t3.minutes = t3.seconds / 60;
    t3.seconds = t3.seconds % 60;
    t3.minutes = t3.minutes + t1.minutes + t2.minutes;
    t3.hours = t3.minutes / 60;
    t3.minutes = t3.minutes % 60;
    t3.hours = t3.hours + t1.hours + t2.hours;
    return t3;
}

int main()
{
    time t1(2, 45, 35), t2(3, 30, 40), t3;
    t3 = add(t1, t2);
    t3.display();
    return 0;
}
