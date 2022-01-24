#include <iostream>

int power(int num, int pow)
{
    /*
     * power(n, p) = power(n, p/2) * power(n, p/2) if p is even
     *             = power(n, p-1) * n             if p is odd
     */
    if (pow == 0)
    {
        return 1;
    }

    int tmp = power(num, pow/2);
    tmp = tmp * tmp;
    if (pow%2 == 0)
    {
        return tmp;
    }
    else
    {
        return tmp * num;
    }
}

int main (int argc, char *argv[])
{
    int inp1;
    int inp2;
    std::cin >> inp1;
    std::cin >> inp2;
    std::cout << power(inp1, inp2) << std::endl;
    return 0;
}
