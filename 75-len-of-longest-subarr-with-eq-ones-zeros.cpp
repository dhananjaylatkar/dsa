#include <bits/stdc++.h>
using namespace std;

int eq_ones_zeros(int arr[], int n)
{
    // replace all zeros with -1 in arr
    // now problem is same as longest subarr with zero sum.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0) arr[i] = -1;
    }

    unordered_map<int, int> m;
    int prefix_sum = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];

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
    int n = 7;
    int arr[] = {1, 0, 1, 1, 1, 0, 0};
    cout << eq_ones_zeros(arr, n) << endl;
    return 0;
}
