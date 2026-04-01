#include <iostream>
#include <vector>
#include <algorithm> // std::min のために必要

int main()
{
    // 【高速化】入出力の同期を切る設定
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, M;
    if (std::cin >> N >> M)
    {
        // 【型の安全性】
        // 今回の制約(最大10^9)ではintでも収まりますが、
        // 合計値を扱う変数はオーバーフローを防ぐため long long にする癖をつけると安全です。
        long long sum = 0;

        std::vector<int> C(M);
        for (int i = 0; i < M; ++i)
        {
            std::cin >> C[i];
        }

        for (int i = 0; i < N; ++i)
        {
            int a, b;
            std::cin >> a >> b;

            // 入力は1始まりなので、0始まりのインデックスに変換
            int pepper_idx = a - 1;

            // 【ロジックの簡素化】
            // 「必要量 b」と「在庫量 C[pepper_idx]」のうち、小さい方が実際にかけられる量です。
            // if文で分岐するよりも、std::min を使うと意図が明確になりコードも短くなります。
            int use = std::min(b, C[pepper_idx]);

            sum += use;
            C[pepper_idx] -= use;
        }

        std::cout << sum << "\n";
    }
    return 0;
}