#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T, X;
    cin >> T >> X;
    vector<int> A(T + 1);
    for (int i = 0; i < T + 1; i++)
    {
        cin >> A[i];
    }
    int ans = A[0];
    cout << 0 << " " << ans << endl;
    for (int i = 0; i < T + 1; i++)
    {

        if (abs(A[i] - ans) >= X)
        {
            ans = A[i];
            cout << i << " " << ans << endl;
        }
    }
}