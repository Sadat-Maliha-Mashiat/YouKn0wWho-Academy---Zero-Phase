#include<iostream>
using namespace std;

int main()
{
    int a , b;

    cout << "Enter two numbers: " << '\n';
    cin >> a >> b;

    if(a > b)
    {
        cout << a << " is the maximum number.\n";
    }

    else if (b > a)
    {
        cout << b << " is the maximum number.\n";
    }

    else
    {
        cout << a << " and " << b << " are equal.\n";
    }

    return 0;
}
