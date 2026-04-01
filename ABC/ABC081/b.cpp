#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    int count = 0;
    if (cin >> N)
    {
        vector<int> A(N);
        for (auto &a : A)
        {
            cin >> a;
        }
        while (true)
        {
            bool exist_odd = false;
            // まず、配列内に奇数が存在するかどうかをチェックします。
            // このループでは値を変更しないので、コピー(auto a)で問題ありません。
            for (auto &a : A)
            {
                if (a % 2 != 0)
                {
                    // exist_odd = true;
                    // break;
                    cout << count << endl;
                    return 0;
                }
                a /= 2;
            }

            // 奇数が見つかった場合、これ以上操作はできないのでループを終了します。
            // if (exist_odd)
            // {
            //     break;
            // }

            // この時点ですべての要素が偶数であることが保証されています。
            // 参照(auto &a)を使って、配列の各要素を2で割ります。
            // for (auto &a : A)
            // {

            // }
            count++;
        }
        cout << count << endl;
        return 0;
    }
}