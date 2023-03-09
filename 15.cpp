/* Write a program that demonstrates constructor overloading.*/
#include <iostream>
using namespace std;

class MyClass {
private:
    int num;
    string str;

public:
    MyClass() {

    }

    MyClass(int n) {
        num = n;
        str = "";
    }

    MyClass(string s) {
        num = 0;
        str = s;
    }

    MyClass(int n, string s) {
        num = n;
        str = s;
    }

    void display() {
        cout << "num = " << num << endl;
        cout << "str = " << str << endl;
    }
};

int main() {
    MyClass obj1;

    MyClass obj2(10);
    obj2.display();

    MyClass obj3("Hello");
    obj3.display();

    MyClass obj4(20, "World");
    obj4.display();

    return 0;
}
