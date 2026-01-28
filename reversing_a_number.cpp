#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: " << '\n';
    cin >> n;

    int result = 0;

    while(n != 0)
    {
        int last_digit = n % 10;

        result = result * 10 + last_digit;

        n /= 10;
    }

    cout << "Reversing the number: " << result << '\n';

    return 0;
}
