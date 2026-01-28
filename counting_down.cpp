#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: " << '\n';
    cin >> n;

    int i = n;

    while(i >= 0)
    {
        cout << i << '\n';

        i--;
    }

    return 0;
}
