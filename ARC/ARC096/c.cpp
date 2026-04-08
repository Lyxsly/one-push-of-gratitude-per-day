#include <iostream>

using namespace std;

int main()
{
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;
    long long ans = 0;
    if (2 * C < A + B)
    {
        ans += 2LL * C * min(X, Y);
        int temp = min(X, Y);
        X -= temp;
        Y -= temp;
    }
    ans += 1LL * min(A, 2 * C) * X + 1LL * min(B, 2 * C) * Y;
    cout << ans << endl;
}