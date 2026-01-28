#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n + 2];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == 0)
            {
                count++;
            }
        }
    }

    cout << count << '\n';

    return 0;
}
