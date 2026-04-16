#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    if (M + (M - 1) <= N)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}