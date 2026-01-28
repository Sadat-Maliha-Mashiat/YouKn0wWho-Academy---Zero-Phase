#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n];

    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int Frequency[n + 2];

    for (int i = 0; i <= n; i++)
    {
        Frequency[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        Frequency[A[i]]++;
    }

    for (int number = 1; number <= n; number++)
    {
        cout << number << " occurs "  << Frequency[number] << " times.\n";
    }

    return 0;
}
