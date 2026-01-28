#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char A[100 + 2];
    cin >> A;
    char B[100 + 2];
    cin >> B;

    int x = strlen(A);
    int y = strlen(B);

    char C[x + y + 2];

    for(int i = 0; i < x; i++)
    {
        C[i] = A[i];
    }

    for(int i = 0; i < y; i++)
    {
        C[x + i] = B[i];
    }

    C[x + y] = '\0';

    cout << "Concatenated string is: " << C << '\n';

    return 0;
}
