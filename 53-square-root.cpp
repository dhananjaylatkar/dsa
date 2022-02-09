#include <bits/stdc++.h>
using namespace std;

int square_root(int x)
{
    int low = 0;
    int high = x / 2;
    int res = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int sqr = mid * mid;
        if (sqr == x)
        {
            return mid;
        }
        else if (x < sqr)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            res = mid;
        }
    }
    return res;
}

int main(int argc, char *argv[])
{
    int x;
    cin >> x;
    cout << square_root(x) << endl;
    return 0;
}
