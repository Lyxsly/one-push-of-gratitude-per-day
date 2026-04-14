#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    // N=0 のエッジケースを処理
    if (N == 0)
    {
        cout << 0 << "\n";
        return 0;
    }

    // Aの要素やsumが大きくなる可能性を考慮し、long longを使用
    vector<long long> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int count = 0;
    // floatより精度の高いdoubleを使用
    double num = 0.5;
    long long sum = A[0];

    // ループは N-1 まで。i=N-1のときに A[i+1] (A[N]) にアクセスすると配列外参照になるため。
    for (int i = 0; i < N - 1; i++)
    {
        if (sum > num)
        {
            count++;
            num = (double)sum - num;
            sum = A[i + 1];
        }
        else
        {
            sum += A[i + 1];
        }
    }
    // ループ終了後、最後のsumが条件を満たすかチェック
    if (sum > num)
    {
        count++;
    }
    cout << count << "\n";

    return 0;
}