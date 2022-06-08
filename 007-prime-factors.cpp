#include <iostream>

void prime_factors(int num)
{
    if (num <= 1) return;

    while (num % 2 == 0)
    {
        std::cout << 2 << std::endl;
        num = num / 2;
    }
    while (num % 3 == 0)
    {
        std::cout << 3 << std::endl;
        num = num / 3;
    }

    for (int i = 5; i * i <= num; i += 6)
    {
        while (num % i == 0)
        {
            std::cout << i << std::endl;
            num = num / i;
        }
        while (num % (i + 2) == 0)
        {
            std::cout << i + 2 << std::endl;
            num = num / (i + 2);
        }
    }

    if (num > 3)
    {
        std::cout << num << std::endl;
    }
}

void prime_factors_old(int num)
{
    if (num <= 1) return;

    for (int i = 2; i * i <= num; i++)
    {
        while (num % i == 0)
        {
            std::cout << i << std::endl;
            num = num / i;
        }
    }

    if (num > 1)
    {
        std::cout << num << std::endl;
    }
}
int main(int argc, char *argv[])
{
    int inp;
    std::cin >> inp;
    prime_factors(inp);
    return 0;
}
