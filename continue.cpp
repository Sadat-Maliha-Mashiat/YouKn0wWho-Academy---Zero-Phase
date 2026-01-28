#include<iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if((i % 3 != 0) && (i % 10 == 9))
        {
            cout << i << '\n';
        }

        else
        {
            continue;
        }
    }

    return 0;
}
