#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: " << '\n';
    cin >> n;

    int i = 1;
    int sum = 0;

    while(i <= n)
    {
        sum += i;

        i++;
    }

    cout << "Sum of 1 to " << n << " = " << sum << '\n';

    return 0;
}
