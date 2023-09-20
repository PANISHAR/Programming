#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char ch[26] = {false};
    for (char c : s)
    {
        if (isalpha(c))
        {
            ch[tolower(c) - 'a'] = true;
        }
    }
    bool panagram = true;
    for (bool c : ch)
    {
        if (!c)
        {
            panagram = false;
        }
    }
    if (panagram)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}