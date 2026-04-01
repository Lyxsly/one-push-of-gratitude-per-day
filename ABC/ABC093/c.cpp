#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int A, B, C;
    if (!(cin >> A >> B >> C))
    {
        return 0;
    }

    // 最大値を見つける
    int M = max({A, B, C});

    // 3つの数の初期合計
    int sum = A + B + C;

    // 目標値 X を決める (とりあえず最大値を目標にする)
    int target = M;
    if ((3 * target - sum) % 2 != 0)
    {
        target = M + 1; // 差が奇数の場合は目標を1つ増やす
    }

    // 必要な操作回数を計算して出力
    cout << (3 * target - sum) / 2 << endl;

    return 0;
}