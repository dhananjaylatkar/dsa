#include <bits/stdc++.h>
using namespace std;

int minDiff(int arr[], int n, int m)
{
    if (n < m) return -1;
    sort(arr, arr + n);
    int res = arr[m - 1] - arr[0];

    for (int i = 1; i + m - 1 < n; i++)
    {
        res = min(res, arr[i + m - 1] - arr[i]);
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    int n = 7;
    int m = 3;
    cout << minDiff(arr, n, m) << endl;
    return 0;
}
