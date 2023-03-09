/*  Write a program that catches multiple exceptions.*/
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    try {
        if (num==0) {
            throw num;
        }
        else if (num==1) {
            throw float(num);
        }
        else if(num==2){
            throw char(num);
        }
        else{
            cout<<"Number is:"<<num;
        }
        
    }
    catch (int i) {
        cout << "Exception detected:Caught an integer "<<endl;  
    }
    catch (float f) {
        cout<< "Exception detected:Caught a float "<<endl;  
    }
    catch (char c) {
        cout<< "Exception detected:Caught an character "<<endl;  
    }
    cout<<  "End of Try and Catch";
    return 0;
}
