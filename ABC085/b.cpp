#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    int diff_count = 1;
    if (!(cin >> N))
    {
        return 0;
    }

    vector<int> d(N);
    for (int i = 0; i < N; i++)
    {
        cin >> d[i];
    }

    sort(d.rbegin(), d.rend());

    for (int i = 1; i < N; i++)
    {
        if (d[i] != d[i - 1])
        {
            diff_count++;
        }
    }

    cout << diff_count << endl;
    return 0;
}

// 別解
// バケット法による解
// # include <iostream>
// using namespace std;

// int main() {
//     int N;
//     int d[110];
//     cin >> N;
//     for (int i = 0; i < N; ++i) cin >> d[i];

//     int num[110] = {0};  // バケット
//     for (int i = 0; i < N; ++i) {
//         num[d[i]]++;  // d[i] が 1 個増える
//     }

//     int res = 0;  // 答えを格納
//     for (int i = 1; i <= 100; ++i) {  // 1 <= d[i] <= 100 なので 1 から 100 まで探索
//         if (num[i]) {  // 0 より大きかったら
//             ++res;
//         }
//     }
//     cout << res << endl;
// }
// std::set を用いた解
// # include <iostream>
// # include <set>
// using namespace std;

// int main() {
//     int N;
//     int d[110];
//     cin >> N;
//     for (int i = 0; i < N; ++i) cin >> d[i];

//     set<int> values; // insert するときに重複を取り除いてくれます
//     for (int i = 0; i < N; ++i) {
//         values.insert(d[i]); // 挿入します
//     }

//     // set のサイズを出力します
//     cout << values.size() << endl;
// }
