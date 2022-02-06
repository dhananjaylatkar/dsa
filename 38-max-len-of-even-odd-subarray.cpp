#include <bits/stdc++.h>
using namespace std;

int max_len(int arr[], int n)
{
    int curr = 1;
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != arr[i - 1] % 2)
        {
            curr++;
        }
        else
        {
            res = max(res, curr);
            curr = 1;
        }
    }
    return res;
}

int main(int argc, char *argv[])
{
    int n = 6;
    int arr[] = {5, 10, 20, 6, 3, 8};
    cout << max_len(arr, n) << endl;
    return 0;
}
