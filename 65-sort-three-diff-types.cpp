#include <bits/stdc++.h>
using namespace std;
/*
 * Dutch National Flag Algo *
 * Given an array with 0s, 1s, and 2
 * sort it such that that all 1's are in middle,
 * 0s on left and 2s on right.
 */
void sort3(int arr[], int n)
{
    int low = 0, high = n - 1;
    int mid = 0;
    while (mid <= high)
    {
        /*
         * Maintaine 4 widows at all time
         * 0 -- low -- mid -- unknown -- high -- end
         * 1) 0 -- low-1
         * 2) low -- mid-1
         * 3) mid -- high-1
         * 4) high -- end-1
         */
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);  // swap with low to make 0s on left side
            mid++;                  // decrease mid window
            low++;                  // increase low window
        }
        else if (arr[mid] == 1)
        {
            mid++;  // elem in low -- mid
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(int argc, char *argv[])
{
    int arr[] = {1, 2, 1, 2, 0, 0, 2};
    int n = 7;
    sort3(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
