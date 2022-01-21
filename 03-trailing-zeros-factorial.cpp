#include <iostream>

int trailing_zeroes(int num)
{
    /**
     * Count number of 2's and 5's in
     * prime factorization of num.
     * Since, there are more number of 2's
     * we need to only count nummber of 5's.
    **/
    int res = 0;
    int div = 5;
    while (num / div)
    {
        res += num/div;
        div *= 5;
    }
    return res;
}

int main (int argc, char *argv[])
{
    int inp;
    std::cin >> inp;
    std::cout << "trailing zeroes in factorial: " << trailing_zeroes(inp) << std::endl;
    return 0;
}
