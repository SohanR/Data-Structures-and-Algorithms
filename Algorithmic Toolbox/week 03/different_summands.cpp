#include <bits/stdc++.h>
using namespace std;

vector<int> optimal_summands(int n)
{
    vector<int> summands;

    int value = n;
    int k = 1;

    while (true)
    {
        if (value <= 2 * k)
        {
            summands.push_back(value);
            break;
        }
        else
        {
            summands.push_back(k);
            value -= k;
            k += 1;
        }
    }
    return summands;
}

int main()
{
    int n;
    cin >> n;
    vector<int> summands = optimal_summands(n);
    cout << summands.size() << '\n';
    for (size_t i = 0; i < summands.size(); ++i)
    {
        cout << summands[i] << ' ';
    }
}