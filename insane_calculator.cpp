#include<iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    int c = a & b;
    int d = a | b;

    int result = c ^ d;

    cout << "Result = " << result << '\n';

    return 0;
}
