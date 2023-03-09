/*Demonstrate ambiguity situations in inheritance. Show how they can be
resolved. */
#include<iostream>
using namespace std;
class First{
    public:
    void display(){
        cout<<"OOOo"<<endl;
    }

};
class Second:virtual public First{

    public:
};
class Third:virtual public First{

    public:
};
class Fourth:public Second,public Third{

    public:
};
int main(){
    Fourth f1;
    f1.display(); //Here ambuigity occurs

return 0;
}
/* To solve ambuigity error we have to made base class i.e Second and Third as virtual*/