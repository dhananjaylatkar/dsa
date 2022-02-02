#include <bits/stdc++.h>
using namespace std;
int trap_water(int arr[], int n)
{
    // create left max arr
    int lmax[n];
    lmax[0] = arr[0];
    for (int i = 1; i < n; i++) {
        lmax[i] = max(lmax[i-1], arr[i]);
    }
    // create right max arr
    int rmax[n];
    rmax[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--) {
        rmax[i] = max(rmax[i+1], arr[i]);
    }
    int res = 0;
    for (int i = 1; i < n-1; i++) {
        res += min(lmax[i], rmax[i]) - arr[i];
    }
    return res;
}
int main (int argc, char *argv[])
{
    int n = 5;
    int arr[] = {5, 0, 6, 2, 3};
    cout << trap_water(arr, n) << endl;
    return 0;
}

