#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int Q, A, q;
    cin >> Q;
    vector<int> B;
    for (int i = 0; i < Q; i++)
    {
        cin >> A >> q;
        if (A == 1)
        {
            B.push_back(q);
        }
        else if (A == 2)
        {
            B.erase(remove_if(B.begin(), B.end(), [q](int x)
                              { return x <= q; }),
                    B.end());
        }
        cout << B.size() << '\n';
    }
}