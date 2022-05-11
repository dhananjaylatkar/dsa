#include <bits/stdc++.h>
using namespace std;

int common_subarr(int arr[], int brr[], int n)
{
    // subtract arr from brr which turns
    // this problem into zero sum subarr.
    int tmp[n];
    for (int i = 0; i < n; i++)
    {
        tmp[i] = arr[i] - brr[i];
    }
    unordered_map<int, int> m;
    int res = 0;
    int prefix_sum = 0;
    for (int i = 0; i < n; i++)
    {
        prefix_sum += tmp[i];

        if (prefix_sum == 0) res = i + 1;
        if (m.find(prefix_sum) == m.end())
        {
            m.insert({prefix_sum, i});
        }
        else
        {
            res = max(res, i - m[prefix_sum]);
        }
    }
    return res;
}
int main(int argc, char *argv[])
{
    int n = 6;
    int arr[] = {0, 1, 0, 0, 0, 0};
    int brr[] = {1, 0, 1, 0, 0, 1};
    cout << common_subarr(arr, brr, n) << endl;
    return 0;
}
