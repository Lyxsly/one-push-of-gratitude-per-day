#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    map<int, int> count;
    // vector<int> count(200001, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        count[A[i]]++;
    }
    // sort(A.begin(), A.end());
    vector<int> v;
    for (auto p : count)
    {
        v.push_back(p.second);
    }
    sort(v.begin(), v.end());
    int n = v.size();

    if (n <= K)
    {
        cout << 0 << endl;
    }
    else
    {
        int ans = 0;
        for (int i = 0; i < n - K; i++)
        {
            ans += v[i];
        }
        cout << ans << endl;
    }

    return 0;
}