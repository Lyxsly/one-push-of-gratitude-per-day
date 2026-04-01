#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main()
{
    int A, B, C, D;
    if (!(cin >> A >> B >> C >> D))
    {
        return 1;
    }
    int ans = min(B, D) - max(A, C);
    cout << (ans >= 0 ? ans : 0) << endl;
    return 0;
}