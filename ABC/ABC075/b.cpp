#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int H, W;
    if (!(cin >> H >> W))
    {
        return 0;
    }

    // H行の文字列の配列を作成し、入力を受け取る
    vector<string> S(H);
    for (int i = 0; i < H; ++i)
    {
        cin >> S[i];
    }

    // 各マスを探索
    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            // 地雷がないマス('.')の場合のみ、周囲の地雷を数える
            if (S[i][j] == '.')
            {
                int count = 0;
                // 周囲8マスを調べるため、-1, 0, 1 の変化量を生成する
                for (int dy = -1; dy <= 1; ++dy)
                {
                    for (int dx = -1; dx <= 1; ++dx)
                    {
                        // 自分自身のマス(dx=0, dy=0)はスキップ
                        if (dy == 0 && dx == 0)
                            continue;

                        int ny = i + dy; // 見るべきマスのy座標
                        int nx = j + dx; // 見るべきマスのx座標

                        // 盤面の範囲内に収まっているかをチェック (Out of Bounds対策)
                        if (0 <= ny && ny < H && 0 <= nx && nx < W)
                        {
                            if (S[ny][nx] == '#')
                                count++;
                        }
                    }
                }
                // 数えた地雷の数を文字にして置き換える ('0'に数値を足すと文字になる)
                S[i][j] = char('0' + count);
            }
        }
    }

    for (int i = 0; i < H; ++i)
        cout << S[i] << endl;

    return 0;
}