#include <bits/stdc++.h>
using namespace std;

int cut_the_rope(int n, int a, int b, int c)
{
    if (n < 0)
    {
        return -1;
    }
    if (n == 0)
    {
        return 0;
    }

    int res = max(
            max(cut_the_rope(n-a, a, b, c), cut_the_rope(n-b, a, b, c)),
            cut_the_rope(n-c, a, b, c)
            );

    if (res == -1)
    {
        return -1;
    }
    return res + 1;
}

int main (int argc, char *argv[])
{
    int n, a, b, c;
    cin >> n;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << cut_the_rope(n, a, b, c) << endl;
    return 0;
}
