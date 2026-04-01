#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    int ans = 1;
    bool plusflag = false;
    bool minusflag = false;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N - 1; i++)
    {
        if (A[i] < A[i + 1])
        {
            if (minusflag)
            {
                ans++;
                minusflag = false;
                plusflag = false;
            }
            else
            {
                plusflag = true;
            }
        }
        else if (A[i] > A[i + 1])
        {
            // minusflag = true;
            if (plusflag)
            {
                ans++;
                plusflag = false;
                minusflag = false;
            }
            else
            {
                minusflag = true;
            }
        }
        else if (A[i] == A[i + 1])
        {
            continue;
        }
    }
    cout << ans << endl;
}