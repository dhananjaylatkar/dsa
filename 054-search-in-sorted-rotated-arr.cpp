#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int elem, int n)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == elem) return mid;
        if (arr[low] < arr[mid])
        {
            if (elem >= arr[low] && elem < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (elem >= arr[mid + 1] && elem <= arr[high])
            {
                low = mid + 1;
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
    int num = 5;
    int arr[] = {5, 1, 2, 3, 4};
    cout << search(arr, 1, num) << endl;
    return 0;
}
