#include<iostream>
#include<string.h>
using namespace std;

/*int main()
{
    char str[100 + 2];
    cin.getline(str, 100);

    int n = strlen(str);

    char reversed[n + 2];
    int j = 0;

    for(int i = n - 1; i >= 0; i--)
    {
        reversed[j] = str[i];

        j++;
    }

    reversed[n] = '\0';

    for(int i = 0; i < n; i++)
    {
        str[i] = reversed[i];
    }

    cout << "Reversed string is: " << reversed << '\n';

    return 0;
}*/


int main()
{
    char str[100 + 2];
    cin.getline(str, 100);

    strrev(str);

    cout << "Reversed string is: " << str << '\n';

    return 0;
}
