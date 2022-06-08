#include <bits/stdc++.h>
using namespace std;
int max_sum_of_subarray(int arr[], int n)
{
    int max_sum = arr[0];
    int max_sum_till_n = arr[0];
    for (int i = 1; i < n; i++)
    {
        max_sum_till_n = max(arr[i], max_sum_till_n + arr[i]);
        max_sum = max(max_sum_till_n, max_sum);
    }
    return max_sum;
}

int max_sum_of_circular_subarray(int arr[], int n)
{
    int max_sum_normal = max_sum_of_subarray(arr, n);
    if (max_sum_normal < 0) return max_sum_normal;

    int arr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int max_sum_circular =
        arr_sum + max_sum_of_subarray(
                      arr, n);  // arr_sum - (-1*max_sum_of_subarray(arr, n))
    return max(max_sum_normal, max_sum_circular);
}

int main(int argc, char *argv[])
{
    int n = 5;
    int arr[] = {8, -4, 3, -5, 4};
    cout << max_sum_of_circular_subarray(arr, n) << endl;
    return 0;
}
