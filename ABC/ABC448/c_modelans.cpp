#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
#include <utility>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    int N, Q;
    cin >> N >> Q;
    vector<pair<int, int>> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i].first;
        A[i].second = i;
    }
    sort(begin(A), end(A));

    while (Q--)
    {
        int K;
        cin >> K;
        vector<int> B(K);
        for (auto &b : B)
            cin >> b;
        for (int i = 0;; i++)
        {
            if (find(begin(B), end(B), A[i].second + 1) != end(B))
                continue;
            cout << A[i].first << "\n";
            break;
        }
    }
}