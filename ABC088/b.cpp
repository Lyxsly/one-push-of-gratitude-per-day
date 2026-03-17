#include <iostream>
#include <string>
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
    for (auto &a : A)
    {
        cin >> a;
    }

    // カードを大きい順（降順）にソートする
    // A.rbegin()とA.rend()を使うと逆順（reverse）でソートできる
    sort(A.rbegin(), A.rend());

    int alice_score = 0;
    int bob_score = 0;

    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            alice_score += A[i];
        }
        else
        {
            bob_score += A[i];
        }
    }
    cout << alice_score - bob_score << endl;
    return 0;
}