#include <iostream>

int gcd(int a, int b)
{
    // gcd(a, b) = gcd(a-b, b) for a>b.
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int gcd_rec(int a, int b)
{
    if (b == 0)
        return a;
    return gcd_rec(b, a%b);
}
int main (int argc, char *argv[])
{
    int inp1;
    int inp2;
    std::cin >> inp1;
    std::cin >> inp2;
    std::cout << "GCD of " << inp1 << " and " << inp2 << " is "  << gcd(inp1, inp2) << std::endl;
    std::cout << "GCD of " << inp1 << " and " << inp2 << " is "  << gcd_rec(inp1, inp2) << std::endl;
    return 0;
}
