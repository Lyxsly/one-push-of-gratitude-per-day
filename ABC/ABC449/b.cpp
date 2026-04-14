#include <iostream>

using namespace std;

int main()
{
    int H, W, Q;
    cin >> H >> W >> Q;
    for (int i = 0; i < Q; i++)
    {
        int t, n;
        cin >> t >> n;
        if (t == 1)
        {
            cout << n * W << "\n";
            H -= n;
        }
        else if (t == 2)
        {
            cout << n * H << "\n";
            W -= n;
        }
    }
}
