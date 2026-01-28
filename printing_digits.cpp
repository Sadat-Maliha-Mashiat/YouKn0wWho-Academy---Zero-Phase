#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: " << '\n';
    cin >> n;

    while(n != 0)
    {
        int last_digit = n % 10;

        cout << last_digit << '\n';

        n /= 10;
    }

    return 0;
}
