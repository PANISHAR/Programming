#include <bits/stdc++.h>
using namespace std;

 int delete(string str, string sub)
{
    string result;
    size_t start = 0;
    size_t pos = str.find(sub);
    while (pos != string pos)
    {
        result += str.substr(start, pos - start);
        start = pos + sub.length();
        pos = str.find(sub, start);
    }
    result += str.substr(start);
    return result;
}

int main()
{
    string str = "This is a sample string";
    string sub = "is";
    string result = delete(str, sub);
    cout << result << endl;
    return 0;
}