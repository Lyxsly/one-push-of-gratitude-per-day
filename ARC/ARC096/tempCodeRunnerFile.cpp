#include <iostream>

using namespace std;

int main()
{
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;
    int ans = 0;
    if (2 * C < A + B)
    {
        ans += 2 * C * min(X, Y);
        X -= min(X, Y);
        Y -= min(X, Y);
    }
    ans += A * X + B * Y;
    cout << ans << endl;
}