#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> t(N + 1);
    vector<int> x(N + 1);
    vector<int> y(N + 1);
    t[0] = 0;
    x[0] = 0;
    y[0] = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> t[i + 1] >> x[i + 1] >> y[i + 1];
        }

    bool can = true;
    for (int i = 0; i < N; i++)
    {
        int dt = t[i + 1] - t[i];
        int dist = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
        if (dt < dist)
        {
            can = false;
            // break;
        }
        if (dist % 2 != dt % 2)
        {
            can = false;
            // break;
        }
    }

    if (can)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}