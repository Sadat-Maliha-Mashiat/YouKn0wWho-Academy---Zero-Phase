#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char S[100 + 2];
    cin >> S;

    char P[100 + 2];
    int n = strlen(S);

    for(int i = 0; i < n; i++)
    {
        P[i] = S[i];
    }

    P[n] = '\0';

    strrev(P);

    bool all_equal = true;

    for(int i = 0; i < n; i++)
    {
        if(S[i] != P[i])
        {
           all_equal = false;
           break;
        }
    }

    if(all_equal)
    {
        cout << "Palindrome.\n";
    }

    else
    {
        cout << "Not palindrome.\n";
    }

    return 0;
}
