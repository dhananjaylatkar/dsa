#include <bits/stdc++.h>
using namespace std;

int peak(int arr[], int n)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
            (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        {
            return mid;
        }
        else if (mid > 0 && arr[mid - 1] >= arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main(int argc, char *argv[])
{
    int num = 7;
    int arr[] = {5, 20, 40, 30, 20, 50, 60};
    cout << peak(arr, num) << endl;
    return 0;
}
