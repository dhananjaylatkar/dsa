#include <iostream>

bool is_prime(int n)
{
    if (n == 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
int main(int argc, char *argv[])
{
    int inp;
    std::cin >> inp;
    std::cout << inp << " is ";
    if (is_prime(inp))
    {
        std::cout << "prime" << std::endl;
    }
    else
    {
        std::cout << "not prime" << std::endl;
    }
    return 0;
}
