#include <iostream>

int factorial(int num)
{
    if (num == 0)
        return 1;
    return (num)*factorial(num-1);
}

int main (int argc, char *argv[])
{
    int inp;
    std::cin >> inp;
    std::cout << "Factorial: " << factorial(inp) << std::endl;
    return 0;
}
