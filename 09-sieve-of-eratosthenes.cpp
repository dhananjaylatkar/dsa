#include <iostream>
#include <vector>

void sieve(int num)
{
    std::vector<bool> is_prime(num+1, true);

    // for (int i = 2; i*i < num; i++)
    for (int i = 2; i <= num; i++)
    {
        if (is_prime[i])
        {
            std::cout << i << std::endl;
            // for (int j = 2*i; j <= num; j+=i)
            for (int j = i*i; j <= num; j+=i)
            {
                is_prime[j] = false;
            }
        }
    }
}

int main (int argc, char *argv[])
{
    int inp;
    std::cin >> inp;
    sieve(inp);
    return 0;
}

