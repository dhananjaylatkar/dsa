#include <bits/stdc++.h>
using namespace std;
int remove_dups(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[res-1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}
int main (int argc, char *argv[])
{
    int n = 4;
    int arr[] = {12, 12, 12, 13};
    cout << remove_dups(arr, n) << endl;
    return 0;
}
