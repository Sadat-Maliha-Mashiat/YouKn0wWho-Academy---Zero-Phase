#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: " << '\n';
    cin >> ch;

    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "This is a vowel.\n";
    }

    else if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << "This is a vowel.\n";
    }

    else
    {
        cout << "This is a consonant.\n";
    }

    return 0;
}
