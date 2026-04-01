#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, A, B;
    if (!(cin >> N >> A >> B))
    {
        return 0;
    }
    // AとBの差が偶数なら先手のAの勝ち、奇数なら後手のBの勝ち？
    if ((A - B) % 2 == 0)
    {
        cout << "Alice" << endl;
    }
    else
    {
        cout << "Borys" << endl;
    }
    return 0;
}