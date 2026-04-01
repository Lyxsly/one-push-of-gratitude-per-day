#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int count = 0;
    for (auto c : S)
    {
        if (c == '1')
            count++;
    }
    cout << count << endl;
    return 0;
}
