#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> c(m + 1);
    vector<int> s(m + 1, 0);
    for (int i = 1; i <= m; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        s[a] += b;
    }
    int res = 0;
    for (int i = 1; i <= m; i++)
    {
        res += min(c[i], s[i]);
    }
    cout << res << "\n";
    return 0;
}
