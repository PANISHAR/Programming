#include <iostream>
using namespace std;

int main()
{

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    int mult = a * b * c * d;
    int last_digits = mult % 100;
    if (last_digits < 10)
    {
        cout << 0 << last_digits << '\n'; 
    }
    else
    {
        cout << last_digits << '\n';
    }
    return 0;
}