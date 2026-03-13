#include <iostream>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i] < X)
        {
            X = A[i];
            cout << "1" << "\n";
        }
        else
        {
            cout << "0" << "\n";
        }
    }
    return 0;
}