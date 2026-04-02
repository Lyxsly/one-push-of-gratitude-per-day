#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, C, K;
    cin >> N >> C >> K;
    vector<int> T(N);
    for (int i = 0; i < N; i++)
    {
        cin >> T[i];
    }
    sort(T.begin(), T.end());
    int ans = 1;
    int count = 0;
    int start = T[0];
    for (int i = 0; i < N; i++)
    {
        if (start + K >= T[i] && count < C)
        {
            count++;
        }
        else
        {
            ans++;
            start = T[i];
            count = 1;
        }
    }
    cout << ans << endl;
}