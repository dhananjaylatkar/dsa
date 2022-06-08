#include <bits/stdc++.h>
using namespace std;

bool zero_sum(int arr[], int n)
{
    unordered_set<int> s;
    int prefix_sum = 0;
    // if 2 prefix sums are same that means
    // there is a sub-array with zero sum
    for (int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        // cout << prefix_sum << endl;
        if (s.find(prefix_sum) != s.end())
        {
            return true;
        }
        if (prefix_sum == 0)
        {
            return true;
        }
        s.insert(prefix_sum);
    }
    return false;
}

int main(int argc, char *argv[])
{
    int n = 5;
    int arr[] = {2, 2, -3, 1, 9};
    cout << zero_sum(arr, n) << endl;
    return 0;
}
