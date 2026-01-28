#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int A[n];
    int B[n];

    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int j = 0;

    for(int i = n - 1; i >= 0; i--)
    {
        B[j] = A[i];

        j++;
    }

    for(int i = 0; i < n; i++)
    {
        A[i] = B[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}
