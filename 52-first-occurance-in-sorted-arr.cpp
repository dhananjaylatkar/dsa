#include <bits/stdc++.h>
using namespace std;

int first_occ(int arr[], int elem, int low, int high)
{
    if (low > high) return -1;

    int mid = (low + high) / 2;
    if (arr[mid] == elem)
    {
        if (mid == 0)
        {
            return mid;
        }
        else if (arr[mid - 1] == elem)
        {
            return first_occ(arr, elem, low, mid - 1);
        }
        else
        {
            return mid;
        }
    }
    if (arr[mid] > elem)
    {
        return first_occ(arr, elem, low, mid - 1);
    }
    else
    {
        return first_occ(arr, elem, mid + 1, high);
    }
}

int first_occ_iter(int arr[], int elem, int n)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > elem)
        {
            high = mid - 1;
        }
        else if (arr[mid] < elem)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] != elem)
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}
int main(int argc, char *argv[])
{
    int arr[] = {2, 2, 2, 3, 3};
    // int arr[] = {1, 1, 1, 1, 1};
    cout << first_occ(arr, 2, 0, 4) << endl;
    cout << first_occ_iter(arr, 2, 4) << endl;
    return 0;
}
