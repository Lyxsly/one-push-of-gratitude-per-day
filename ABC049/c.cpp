#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main()
{
    string S;
    if (!(cin >> S))
    {
        return 0;
    }
    reverse(S.begin(), S.end());
    for (int i = 0; i < 4; i++)
    {
        reverse(divide[i].begin(), divide[i].end());
    }
    bool flag = true;
    for (int i = 0; i < S.size();)
    {
        bool found = false;
        for (int j = 0; j < 4; j++)
        {
            if (S.substr(i, divide[j].size()) == divide[j])
            {
                i += divide[j].size();
                found = true;
                break;
            }
        }
        if (!found)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}