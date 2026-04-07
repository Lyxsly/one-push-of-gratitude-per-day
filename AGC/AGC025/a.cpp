#include <iostream>

using namespace std;

int findSumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int N;
    cin >> N;
    int ans;
    int x = N;
    bool isPowerOfTen = true;
    while (x > 1)
    {
        if (x % 10 != 0)
        {
            isPowerOfTen = false;
            break;
        }
        x /= 10;
    }

    if (isPowerOfTen)
    {
        ans = 10;
    }
    else
    {
        ans = findSumOfDigits(N);
    }
    cout << ans << endl;
}