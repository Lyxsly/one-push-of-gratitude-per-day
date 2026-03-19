#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, Y;
    if (!(cin >> N >> Y))
    {
        return 0;
    }

    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= N - i; j++)
        {
            int k = N - i - j;
            if (10000 * i + 5000 * j + 1000 * k == Y)
            {
                cout << i << " " << j << " " << k << endl;
                return 0;
            }
        }
    }
}