#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int line = 1; line <= n; line++)
    {
        int space = n - line;
        int star = 2 * line - 1;

        for(int i = 1; i <= space; i ++)
        {
            cout << " ";
        }

        for(int i = 1; i <= star; i++)
        {
            cout << "*";
        }

        cout << '\n';
    }

    return 0;
}
