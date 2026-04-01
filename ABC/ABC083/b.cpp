#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, A, B;
    int total = 0;
    cin >> N >> A >> B;
    for (int i = 1; i <= N; i++)
    {
        string S = to_string(i);
        int sum = 0;
        for (auto c : S)
        {
            sum += c - '0';
        }
        if (A <= sum && sum <= B)
        {
            total += i;
        }
    }
    cout << total << endl;
    return 0;
}