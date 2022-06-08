#include <bits/stdc++.h>
using namespace std;

bool given_sum(int arr[], int n, int sum)
{
    // Logic is similar to zero sum subarr
    unordered_set<int> s;
    int prefix_sum = 0;

    for (int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];

        if (prefix_sum == sum) return true;
        if (s.find(prefix_sum - sum) != s.end()) return true;
        s.insert(prefix_sum);
    }
    return false;
}
int main(int argc, char *argv[])
{
    int n = 5;
    int sum = 14;
    int arr[] = {2, 7, 6, 1, 9};
    cout << given_sum(arr, n, sum) << endl;
    return 0;
}
