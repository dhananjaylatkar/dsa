#include <bits/stdc++.h>
using namespace std;
void min_flps(int arr[], int n)
{
    /* Given a binary array, we need to find the
     * minimum of number of group flips to make
     * all array elements same.  In a group flip,
     * we can flip any set of consecutive 1s or 0s.
     */

    /* Always flip second group. */
    int to_flip = (arr[0] == 0) ? 1 : 0;
    bool start = true;
    for (int i = 1; i < n; i++) {
        if (arr[i] == to_flip && start)
        {
            cout << "From "<< i;
            start = false;
        }
        if (arr[i] != to_flip && !start)
        {
            cout << " to " << i-1 << endl;
            start = true;
        }
    }
    if (!start)
    {
        cout << " to " << n-1 << endl;
        start = true;
    }
}

int main (int argc, char *argv[])
{
    int n = 10;
    int arr[] = {1, 1, 0, 0, 0, 1, 0, 1, 0, 1};
    min_flps(arr, n);
    return 0;
}

