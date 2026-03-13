#include <iostream>

int main()
{
    // 【高速化】C++の標準入出力とC言語の標準入出力の同期を切り、速度を向上させます。
    // 競技プログラミングでは必須のテクニックの一つです。
    std::ios_base::sync_with_stdio(false); // C++の標準入出力とCの標準入出力の同期を切る
    std::cin.tie(nullptr);                 // 入力と出力のバッファを切り離す（これにより、入力後に自動的に出力がフラッシュされなくなります）

    int N, X;
    if (std::cin >> N >> X)
    {
        // 【メモリ効率・安全性】
        // 元のコードでは `int A[N]` (VLA) を使用していましたが、
        // これは非標準C++であり、Nが大きい場合にスタックオーバーフローのリスクがあります。
        // また、ロジック上、配列全体を保存する必要はなく、入力を読み込みながら
        // 即座に判定・出力が可能です（On-the-fly処理）。
        for (int i = 0; i < N; ++i)
        {
            int a;
            std::cin >> a;

            if (a < X)
            {
                X = a;
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