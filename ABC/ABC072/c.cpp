#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, a;
    cin >> N;
    vector<int> num(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        num[a]++;
    }
    int ans = 0;
    for (int i = 1; i + 1 < N; i++)
    {
        int tmp = num[i - 1] + num[i] + num[i + 1];
        ans = max(ans, tmp);
    }
    cout << ans << endl;
}