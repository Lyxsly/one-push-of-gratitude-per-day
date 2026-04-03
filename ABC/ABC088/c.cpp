#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> A(3, vector<int>(3));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }

    vector<int> a(3), b(3);

    // a[0] を 0 と仮定して他の変数を芋づる式に決定する
    a[0] = 0;
    b[0] = A[0][0] - a[0];
    b[1] = A[0][1] - a[0];
    b[2] = A[0][2] - a[0];
    a[1] = A[1][0] - b[0];
    a[2] = A[2][0] - b[0];

    // 求めた a, b で全ての A[i][j] に矛盾がないか確認する
    bool ok = true;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (A[i][j] != a[i] + b[j])
            {
                ok = false;
            }
        }
    }

    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}