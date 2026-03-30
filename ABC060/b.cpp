#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int i = 0;
    for (int i = 0; i < B; i++)
    {
        if ((A * i) % B == C)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}