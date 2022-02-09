#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int elem, int low, int high)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == elem)
    {
        return mid;
    }
    else if (arr[mid] > elem)
    {
        return binary_search(arr, elem, low, mid - 1);
    }
    else
    {
        return binary_search(arr, elem, mid + 1, high);
    }
}

int main(int argc, char *argv[])
{
    // int arr[] = {1, 2, 4, 6, 10};
    int arr[] = {1, 1, 1, 1, 1};
    cout << binary_search(arr, 2, 0, 4) << endl;
    return 0;
}
