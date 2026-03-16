#include <iostream>
#include <vector>
#include <random>

using namespace std;

int main()
{
    vector<int> deck(53);
    for (int i = 0; i < 53; i++)
    {
        deck[i] = i;
    }
    for (int i = 0; i < 5; i++)
    {
        // int r = get_random(i, 53);
        int r = i + rand() % (53 - i);
        cout << deck[r] << endl;
        int temp = deck[i];
        deck[i] = deck[r];
        deck[r] = temp;
    }
    return 0;
}

// int get_random(int min, int max)
// {
//     return 0;
// }