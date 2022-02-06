#include <iostream>

int gcd_rec(int a, int b)
{
    if (b == 0) return a;
    return gcd_rec(b, a % b);
}

int lcm(int a, int b)
{
    // a*b = gcd(a, b) * lcm(a, b)
    return (a * b) / gcd_rec(a, b);
}
int main(int argc, char *argv[])
{
    int inp1;
    int inp2;
    std::cin >> inp1;
    std::cin >> inp2;
    std::cout << "LCM of " << inp1 << " and " << inp2 << " is "
              << lcm(inp1, inp2) << std::endl;
    return 0;
}
