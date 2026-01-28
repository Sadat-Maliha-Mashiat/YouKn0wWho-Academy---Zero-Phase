#include<iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: " << '\n';
    cin >> number;

    if(number > 0)
    {
        cout << "This is a positive number.\n";
    }

    else if(number < 0)
    {
        cout << "This is a negative number.\n";
    }

    else
    {
        cout << "This is a zero.\n";
    }

    return 0;
}
