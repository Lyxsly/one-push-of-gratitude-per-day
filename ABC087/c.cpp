#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    // int max_sum = 0;
    vector<vector<int>> s(2, vector<int>(N));
    vector<vector<int>> dp(2, vector<int>(N, 0));
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> s[i][j];
        }
    }
    dp[0][0] = s[0][0];
    // for (int i = 0; i < N; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j <= i; j++)
    //     {
    //         sum += s[0][j];
    //     }
    //     for (int j = i; j < N; j++)
    //     {
    //         sum += s[1][j];
    //     }
    //     max_sum = max(max_sum, sum);
    // }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j > 0)
            {
                dp[i][j] = max(dp[i][j], dp[i][j - 1] + s[i][j]);
            }
            if (i > 0)
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j] + s[i][j]);
            }
        }
    }
    cout << dp[1][N - 1] << endl;
    return 0;
}