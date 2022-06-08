#include <bits/stdc++.h>
using namespace std;

int set_bits(int n)
{
    int res = 0;
    while (n)
    {
        n = n & (n - 1);
        res++;
    }
    return res;
}

int table[256];
void init()
{
    table[0] = 0;
    for (int i = 0; i < 256; i++)
    {
        table[i] = (1 & i) + table[i / 2];
    }
}
int set_bits_lookup_table(int n)
{
    int res = 0;

    for (int i = 8; n > 0; i += 8)
    {
        res += table[n & 0xff];
        n = n >> i;
    }
    return res;
}
int main(int argc, char *argv[])
{
    int inp;
    cin >> inp;
    cout << set_bits(inp) << endl;
    init();
    cout << set_bits_lookup_table(inp) << endl;
    return 0;
}
