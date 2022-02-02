#include <bits/stdc++.h>
using namespace std;
int max_diff(int arr[], int n)
{
    int res = arr[1] - arr[0];
    int min_val = arr[0];

    for (int j = 1; j < n; j++) {
        res = max(res, arr[j] - min_val);
        min_val = min(min_val, arr[j]);
    }
    return res;
}
int main (int argc, char *argv[])
{
    int n = 7;
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    cout << max_diff(arr, n) << endl;
    return 0;
}
