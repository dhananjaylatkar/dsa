#include <bits/stdc++.h>
using namespace std;

int len_of_subarr(int arr[], int n, int sum)
{
    unordered_map<int, int> m;
    int prefix_sum = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        if (prefix_sum == sum)
        {
            // it is always subarr starting with 0
            res = i + 1;
        }
        if (m.find(prefix_sum) == m.end())
        {
            // insert if prefix sum is not already present
            m.insert({prefix_sum, i});
        }
        if (m.find(prefix_sum - sum) != m.end())
        {
            // if subarr with sum is found then update res
            res = max(res, i - m[prefix_sum - sum]);
        }
    }
    return res;
}
int main(int argc, char *argv[])
{
    int n = 3;
    int sum = 5;
    int arr[] = {5, 2, 3};
    cout << len_of_subarr(arr, n, sum) << endl;
    return 0;
}
