#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    int sum = 0;
    if (cin >> N >> M)
    {

        vector<int> C(M);
        for (int i = 0; i < M; i++)
        {
            cin >> C[i];
        }
        for (int i = 0; i < N; i++)
        {
            int a, b;
            cin >> a >> b;

            if (b <= C[a - 1])
            {
                sum += b;
                C[a - 1] -= b;
            }
            else
            {
                sum += C[a - 1];
                C[a - 1] = 0;
            }
        }
    }
    cout << sum << endl;
}