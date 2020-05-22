#include <cassert>
#include <iostream>

int fibonacci_naive(int n)
{
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

int fibonacci_fast(int n)
{
    // write your code here
    if (n <= 1)
        return n;
    int a = 0;
    int b = 1;
    int temp;
    for (int i = 2; i <= n; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
    }

    return temp;
}

void test_solution()
{
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int n = 0; n < 20; ++n)
        assert(fibonacci_fast(n) == fibonacci_naive(n));
}

int main()
{
    int n = 0;
    std::cin >> n;

    // std::cout << fibonacci_naive(n) << '\n';
    // test_solution();
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}