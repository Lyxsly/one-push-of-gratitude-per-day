#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for (int i = 0; i < H; i++)
    {
        if (i == 0 || i == H - 1)
        {
            S[i] = string(W, '#');
        }
        else
        {
            for (int j = 0; j < W; j++)
            {
                if (j == 0 || j == W - 1)
                {
                    S[i] += '#';
                }
                else
                {
                    S[i] += '.';
                }
            }
        }
    }
    for (int i = 0; i < H; i++)
    {
        cout << S[i] << endl;
    }
}