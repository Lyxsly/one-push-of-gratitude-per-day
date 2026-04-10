#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        A[a - 1]--;
        A[b - 1]++;
    }
    for (int i = 0; i < M; i++)
    {
        cout << A[i] << endl;
    }
}