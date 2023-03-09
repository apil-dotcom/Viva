#include <iostream>
#include <string>
using namespace std;

// Base class: Person
class Person {

    string name;
    int age;
    string address;

public:
    // Default constructor
    Person() {
    }

    // Constructor with parameters
    Person(string n, int a, string addr) {
        name = n;
        age = a;
        address = addr;
    }

    // Member function to display data
    void showData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

// Derived class: Teacher
class Teacher : public Person {
private:
    string qualification;
    string department;

public:
    // Constructor with parameters
    Teacher(string n, int a, string addr, string qual, string dept) : Person(n, a, addr) {
        qualification = qual;
        department = dept;
    }

    // Member function to display data
    void showData() {
        cout << "-----Teacher's Information-----" << endl;
        Person::showData();
        cout << "Qualification: " << qualification << endl;
        cout << "Department: " << department << endl;
    }
};

// Derived class: Student
class Student : public Person {
private:
    string program;
    int semester;

public:
    // Constructor with parameters
    Student(string n, int a, string addr, string prog, int sem) : Person(n, a, addr) {
        program = prog;
        semester = sem;
    }

    // Member function to display data
    void showData() {
        cout << "-----Student's Information-----" << endl;
        Person::showData();
        cout << "Program: " << program << endl;
        cout << "Semester: " << semester << endl;
    }
};

int main() {
    // Create objects of derived classes and call member function to display data
    Teacher t("John", 35, "123 Main St", "PhD", "Computer Science");
    t.showData();

    cout << endl;

    Student s("Jane", 20, "456 Elm St", "Engineering", 3);
    s.showData();

    return 0;
}
