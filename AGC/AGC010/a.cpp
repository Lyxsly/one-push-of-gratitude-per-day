#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    if (!(cin >> N))
    {
        return 0;
    }
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        if (!(cin >> A[i]))
        {
            return 0;
        }
    }
    int odd_count = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 != 0)
        {
            odd_count++;
        }
    }

    if (odd_count % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;

    // 模範解答
    //  total A % 2 == 0 ならば YES, 奇数ならば NO
}