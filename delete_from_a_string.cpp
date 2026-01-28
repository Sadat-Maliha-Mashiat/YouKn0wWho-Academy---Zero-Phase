#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s[10 + 2];
    cin >> s;

    int length = strlen(s);

    for(int i = 1; i < length; i++)
    {
        s[i - 1] = s[i];
    }

    s[length - 1] = '\0';

    cout << s;

    return 0;
}
