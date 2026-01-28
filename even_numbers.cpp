#include<iostream>
using namespace std;

/*int main() // for Loop
{
    int n;

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            cout << i << '\n';
        }
    }

    return 0;
}*/


int main() //while Loop
{
    int n;

    cin >> n;

    int i = 1;

    while(i <= n)
    {
        if(i % 2 == 0)
        {
            cout << i << '\n';
        }

        i++;
    }

    return 0;
}
