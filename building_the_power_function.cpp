#include<iostream>
using namespace std;

/*int main() // for Loop
{
    int a , b;

    cin >> a >> b;

    int result = 1;

    for(int i = 1; i <= b; i++)
    {
        result *= a;
    }

    cout << result << '\n';

    return 0;
}*/


int main() // while Loop
{
    int a , b;

    cin >> a >> b;

    int result  = 1;
    int i = 1;

    while(i <= b)
    {
        result *= a;

        i++;
    }

    cout << result << '\n';

    return 0;
}
