#include<iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: " << '\n';
    cin >> number;

    if(number % 2 == 0)
    {
        cout << "This in an even number.\n";
    }

    else
    {
        cout << "This is an odd number.\n";
    }

    return 0;
}
