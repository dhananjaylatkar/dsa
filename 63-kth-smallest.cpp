#include <bits/stdc++.h>
using namespace std;

int lomuto_part(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[r]);
    return i;
}

int kth_smallest(int arr[], int n, int k)
{
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int p = lomuto_part(arr, l, r);

        if (p == k - 1)
            return p;
        else if (p > k - 1)
            r = p - 1;
        else
            l = p + 1;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {10, 4, 5, 8, 11, 6, 26};
    int n = 7;
    int k = 5;

    cout << arr[kth_smallest(arr, n, k)] << endl;
    return 0;
}
