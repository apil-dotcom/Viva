/* wap to sort N numbers in an array dynamically (using new and delete operator)*/
/* #include <iostream>
using namespace std;
int main()
{
    int n=5;
    int *ptr=new int[n];
    cout<<"Enter "<<n<<" numbers"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ptr[i] > ptr[j])
            {
                int temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
    cout << "Displaying sorted numbers......................" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << " ";
    }
    delete[] ptr;

    return 0;
} */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of terms to sort: ";
    cin>>n;
    int *ptr = new int[n];
    cout << "Enter the numbers to sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1 + i; j < n; j++)
        {
            if (ptr[i] > ptr[j])
            {
                int temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
    cout<<"Sorted Numbers are"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << endl;
    }

    return 0;
}