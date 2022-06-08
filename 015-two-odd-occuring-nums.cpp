#include <bits/stdc++.h>
using namespace std;

void two_lonely_nums(int a[], int n)
{
    int xor_num = 0;
    int res1 = 0, res2 = 0;
    for (int i = 0; i < n; i++)
    {
        xor_num = xor_num ^ a[i];
    }

    int bit = xor_num & ~(xor_num - 1);

    for (int i = 0; i < n; i++)
    {
        if (bit & a[i])
        {
            res1 = res1 ^ a[i];
        }
        else
        {
            res2 = res2 ^ a[i];
        }
    }
    cout << res1 << ", " << res2 << endl;
}

int main(int argc, char *argv[])
{
    int n = 8;
    int a[] = {1, 2, 3, 3, 6, 5, 5, 6};
    two_lonely_nums(a, n);
    return 0;
}
