#include <iostream>

bool is_palindrome(int num)
{
    int rev = 0;
    int tmp = num;
    while (tmp > 0)
    {
        rev = (rev * 10) + (tmp % 10);
        tmp = tmp / 10;
    }
    return (rev == num);
}

int main(int argc, char *argv[])
{
    int inp;
    std::cin >> inp;
    if (is_palindrome(inp))
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    return 0;
}
