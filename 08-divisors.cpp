#include <iostream>

void divisors(int num)
{
    int i;
    for (i = 1; i * i < num; i++)
    {
        // std::cout << "i= " << i << std::endl;
        if (num % i == 0)
        {
            std::cout << i << std::endl;
        }
    }
    if (i == num / i)
    {
        std::cout << i << std::endl;
    }
    for (i = i - 1; i >= 1; i--)
    {
        // std::cout << "i'= " << i << std::endl;
        if (num % i == 0)
        {
            std::cout << num / i << std::endl;
        }
    }
}

int main(int argc, char *argv[])
{
    int inp;
    std::cin >> inp;
    divisors(inp);
    return 0;
}
