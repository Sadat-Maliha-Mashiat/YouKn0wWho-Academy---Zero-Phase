#include<iostream>
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

    int maximum = A[0];

    for(int i = 0; i < n; i++)
    {
        if(A[i] > maximum)
        {
            maximum = A[i];
        }
    }

    cout << "The largest number in the array is: " << maximum << '\n';

    return 0;
}
