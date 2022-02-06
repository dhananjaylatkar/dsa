#include <bits/stdc++.h>
using namespace std;

int max_sum(int arr[], int n)
{
    int max_sum = arr[0];
    int max_till_n = arr[0];
    for (int i = 1; i < n; i++)
    {
        max_till_n = max(arr[i], max_till_n + arr[i]);
        max_sum = max(max_till_n, max_sum);
    }
    return max_sum;
}

int main(int argc, char *argv[])
{
    int n = 7;
    int arr[] = {-5, 1, -2, 3, -1, 2, -2};
    cout << max_sum(arr, n) << endl;
    return 0;
}
