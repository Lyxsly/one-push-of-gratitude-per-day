#include <iostream>
using namespace std;

int main()
{
    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    long long dx = x2 - x1;
    long long dy = y2 - y1;
    long long dz = -dx - dy;
    long long ans = 0;
    long long anz_2 = max(max(abs(dx), abs(dy)), abs(dz));
    if ((dx >= 0 && dy >= 0) || (dx <= 0 && dy <= 0))
    {
        ans = abs(dx) + abs(dy);
    }
    else
    {
        ans = max(abs(dx), abs(dy));
    }

    cout << ans << endl;
    cout << anz_2 << endl;
    return 0;
}