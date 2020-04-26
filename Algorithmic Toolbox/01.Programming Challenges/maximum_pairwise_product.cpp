#include <iostream>
#include <vector>
using namespace std;

long long MaxPair(vector<int> numbers)
{
    long long x = 0;
    int xsize = numbers.size();

    for (int i = 0; i < xsize; i++)
    {
        for (int j = i + 1; j < xsize; j++)
        {
            x = max((long long)x, ((long long int)numbers[i] * numbers[j]));
        }
    }

    return x;
}

int main()
{
    int n;

    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    long long product = MaxPair(numbers);
    cout << product << endl;

    return 0;
}