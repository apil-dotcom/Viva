/* #include <iostream>
using namespace std;
class person
{
    string name;

public:
    person() {}
    person(string a)
    {
        name = a;
    }
    void Display1()
    {
        cout << "name is:" << name << endl;
    }
};
class account : virtual public person
{
    int salary;
    int accountnos;

public:
    account() {}
    account(string a, int b, int c) : person(a)
    {
        salary = b;
        accountnos = c;
    }
    void Display1()
    {
        cout << "salary is :" << salary << endl;
        cout << accountnos << endl;
    }
};
class admin : virtual public person
{
    int id;
    int years;

public:
    admin() {}
    admin(string a, int d, int e) : person(a)
    {
        id = d;
        years = e;
    }
    void Display1()
    {
        cout << "id is:" << id << endl;
        cout << "years is " << years << endl;
    }
};

class record : public account, public admin
{
    int records;

public:
    record() {}
    record(string a, int b, int c, int d, int e, int f) : person(a), account(a, b, c), admin(a, d, e)
    {
        records = f;
    }
    void Display1()
    {
        person::Display1();
        admin::Display1();
        account::Display1();
        cout << "record number is:" << records << endl;
    }
};
int main()
{
    record r1("apil", 50000, 26, 1, 15, 26885);
    r1.Display1();

    return 0;
} */
#include <iostream>
using namespace std;
class Person
{
    string name;

public:
    Person() {}
    Person(string a) : name(a) {}
    void display()
    {
        cout << "Name is :" << name << endl;
    }
};
class Account : virtual public Person
{
    int salary, account_Nos;

public:
    Account() {}
    Account(string a, int b, int c):Person(a) {
        salary=b;
        account_Nos=c;
    }
    void display()
    {
        cout << "Salary is : " << salary << endl;
        cout << "Account Number is : " << account_Nos << endl;
    }
};
class Admin : virtual public Person
{
    int adminId, yearsOfExperience;
    public:
    Admin() {}
    Admin(string a, int d, int e) :Person(a) {
        adminId=d;
        yearsOfExperience=e;
    }
    void display()
    {
        cout << "Admin id is:" << adminId << endl;
        cout << "Years of Experience is " << yearsOfExperience << endl;
    }
};
class Record : public Account, public Admin
{
    int recordNos;
    public:
    Record() {}
    Record(string a, int b, int c, int d, int e, int f) : Person(a) , Account(a, b, c) , Admin(a, d, e) {
        recordNos=f;
    }
    void display()
    {
        Person::display();
        Account::display();
        Admin::display();
        cout << "Record Number is:" << recordNos << endl;
    }
};
int main()
{
    Record r("Apil", 10000, 12345, 15, 5, 8);
    r.display();
    return 0;
}