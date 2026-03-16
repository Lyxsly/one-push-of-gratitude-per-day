#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int ans = 0;
    for (auto &c : S)
    {
        int val = c - 'A' + 1;
        ans = ans * 26 + val;
    }
    cout << ans << endl;
    return 0;
}