#include<iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter a: " << endl;
    cin >> a;

    cout << "Enter b: " << endl;
    cin >> b;

    cout << "Before swap: " << endl << "a = " << a << endl << "b = " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "After swap: " << endl << "a = " << a << endl << "b = " << b << endl;

    return 0;

}
