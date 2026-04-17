#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string S;
    cin >> S;
    map<char, int> m;
    for (char c : S)
    {
        m[c]++;
    }
    int max_num = 0;

    for (auto [key, value] : m)
    {
        if (value > max_num)
        {
            max_num = value;
        }
    }
    cout << max_num << endl;
    for (auto &s : S)
    {
        if (m[s] < max_num)
        {
            cout << s;
            // break;
        }
    }
    cout << endl;
}