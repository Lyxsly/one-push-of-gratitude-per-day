#include <iostream>
#include <vector>

int main()
{
    // 高速化のおまじない
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, X;
    if (std::cin >> N >> X)
    {
        // std::vector を使用してサイズ N の配列を確保します。
        // これにより、N が大きい場合でも安全にメモリを確保できます。
        std::vector<int> A(N);

        // まず全ての入力を配列に格納します
        for (int i = 0; i < N; ++i)
        {
            std::cin >> A[i];
        }

        // 格納されたデータを使って判定処理を行います
        for (int i = 0; i < N; ++i)
        {
            if (A[i] < X)
            {
                X = A[i];
                std::cout << "1\n";
            }
            else
            {
                std::cout << "0\n";
            }
        }
    }
    return 0;
}
