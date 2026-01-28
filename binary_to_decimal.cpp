#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char S[100 + 2];
    cin >> S;

    int n = strlen(S);

    int decimal = 0;
    int place_value = 1; // 64, 32, 16, 8, 4, 2, 1

    for(int i = n - 1; i >= 0; i--)
    {
      if(S[i] == '1')
      {
          decimal += place_value;
      }

      place_value *= 2;
    }

    cout << "Decimal = " << decimal << '\n';

    return 0;
}
