#include <bits/stdc++.h>
using namespace std;

int countAndMerge(int arr[], int l, int m, int h)
{
    int n1 = m - l + 1;
    int n2 = h - m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[i + l];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = arr[i + m + 1];
    }
    int i = 0, j = 0, k = l, res = 0;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = right[j];
            k++;
            j++;
            res += n1 - i;
        }
    }
    while (i < n1)
    {
        arr[k] = left[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        k++;
        j++;
    }
    return res;
}

int countInv(int arr[], int l, int h)
{
    int res = 0;
    if (l < h)
    {
        int m = l + (h - l) / 2;
        res += countInv(arr, l, m);
        res += countInv(arr, m + 1, h);
        res += countAndMerge(arr, l, m, h);
    }
    return res;
}
int main(int argc, char *argv[])
{
    int arr[] = {3, 4, 1, 3, 5};
    int n = 5;
    cout << countInv(arr, 0, n - 1) << endl;
    return 0;
}
