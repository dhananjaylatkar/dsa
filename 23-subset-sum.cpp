#include <bits/stdc++.h>
using namespace std;

int subset_sum(int arr[], int n, int sum)
{
    if (n == 0)
    {
        return (sum == 0) ? 1 : 0;
    }

    return subset_sum(arr, n - 1, sum) +
           subset_sum(arr, n - 1, sum - arr[n - 1]);
}
int main(int argc, char *argv[])
{
    int arr[] = {10, 20, 15};
    int n = 3;
    int sum = 25;
    cout << subset_sum(arr, n, sum) << endl;
    return 0;
}
