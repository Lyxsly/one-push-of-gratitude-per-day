#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // 入出力を高速化
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // 駅番号を 1-indexed (1からN) で扱うため、少し大きめに配列を確保します
    vector<vector<long long>> c(n + 1, vector<long long>(n + 1, 0));

    // 上三角行列の形で与えられる入力を受け取る
    for (int i = 1; i <= n - 1; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            cin >> c[i][j];
        }
    }

    // 3つの駅 a, b, c (a < b < c) を全探索
    for (int a = 1; a <= n; ++a)
    {
        for (int b = a + 1; b <= n; ++b)
        {
            for (int c_station = b + 1; c_station <= n; ++c_station)
            {

                // 途中下車して分割した方がコストが安いか判定
                if (c[a][c_station] > c[a][b] + c[b][c_station])
                {
                    cout << "Yes\n";
                    return 0; // 1つでも見つかればYesを出力してプログラムを終了
                }
            }
        }
    }

    // 全ての組み合わせを調べても条件を満たすものがなかった場合
    cout << "No\n";
    return 0;
}