#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    if (cin >> N >> Q)
    {
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < Q; i++)
        {
            int K, B;
            cin >> K;
            vector<int> _copy_A = A;
            for (int j = 0; j < K; j++)
            {
                cin >> B;
                B -= j;
                // cout << B << "\n";
                _copy_A.erase(_copy_A.begin() + B - 1);
                // for (auto x : _copy_A)
                // {
                //     cout << x << " ";
                // }
            }

            cout << *min_element(_copy_A.begin(), _copy_A.end()) << "\n";
        }
    }
}