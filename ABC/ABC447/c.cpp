#include <bits/stdc++.h>

using namespace std;

pair<string, vector<int>> decompose(const string &s)
{
    string t;
    vector<int> v;
    int cnt = 0;
    for (char c : s)
    {
        if (c == 'A')
        {
            ++cnt;
        }
        else
        {
            t += c;
            v.push_back(cnt);
            cnt = 0;
        }
    }
    v.push_back(cnt);
    return {t, v};
}

int main()
{
    string s, t;
    cin >> s >> t;
    auto [ss, sv] = decompose(s);
    auto [ts, tv] = decompose(t);
    if (ss != ts)
    {
        cout << -1 << endl;
        return 0;
    }
    int ans = 0;
    for (int i = 0; i < (int)sv.size(); i++)
    {
        ans += abs(sv[i] - tv[i]);
    }
    cout << ans << endl;
}
