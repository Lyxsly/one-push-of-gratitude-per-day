#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int d0 = s[0] - '0';
    int d1 = s[1] - '0';
    int d2 = s[2] - '0';
    int d3 = s[3] - '0';

    for (int bit = 0; bit < 8; bit++)
    {
        int sum = d0;
        string ans;
        ans += s[0];

        if (bit & 1)
        {
            sum += d1;
            ans += "+";
        }
        else
        {
            sum -= d1;
            ans += "-";
        }
        ans += s[1];

        if (bit & 2)
        {
            sum += d2;
            ans += "+";
        }
        else
        {
            sum -= d2;
            ans += "-";
        }
        ans += s[2];

        if (bit & 4)
        {
            sum += d3;
            ans += "+";
        }
        else
        {
            sum -= d3;
            ans += "-";
        }
        ans += s[3];

        if (sum == 7)
        {
            cout << ans << "=7" << endl;
            return 0;
        }
    }

    return 0;
}