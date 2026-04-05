#include <iostream>
#include <algorithm>
#include <vector>
// #include <map>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(3 * N);
    for (int i = 0; i < 3 * N; i++)
    {
        cin >> A[i];
    }
    sort(A.rbegin(), A.rend());

    long long ans = 0;
    for (int i = 0; i < N; i++)
    {
        ans += A[2 * i + 1];
    }
    cout << ans << endl;
    return 0;
}