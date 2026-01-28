#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int binary[100 + 2];

    int i = 0;

    while(num > 0)
    {
        binary[i] = num % 2;

        num /= 2;

        i++;
    }

    cout << "Binary: ";

    for(int j = i - 1; j >= 0; j--)
    {
        cout << binary[j];
    }

    cout << '\n';

    return 0;
}
