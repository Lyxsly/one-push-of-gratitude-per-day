#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    vector<string> S(H);
    for (int i = 0; i < H; i++)
    {
        cin >> S[i];
    }
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (S[i][j] == '#')
            {
                bool hasAdjacentBlack = false;
                for (int k = 0; k < 4; k++)
                {
                    int x = i + dx[k];
                    int y = j + dy[k];
                    if (x >= 0 && x < H && y >= 0 && y < W)
                    {
                        if (S[x][y] == '#')
                        {
                            hasAdjacentBlack = true;
                            break;
                        }
                    }
                }
                if (!hasAdjacentBlack)
                {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}