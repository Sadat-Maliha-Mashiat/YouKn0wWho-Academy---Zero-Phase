#include<iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    long long int cube = (long long int)(n * n * n);

    int last_two_digits = cube % 100;

    cout << "Last two digits are = " << last_two_digits << '\n';

    return 0;
}
