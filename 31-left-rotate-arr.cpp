#include <bits/stdc++.h>
using namespace std;
void left_rot(int arr[], int n)
{
    int tmp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = tmp;
}
void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
void left_rot_d(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}
int main(int argc, char *argv[])
{
    int n = 5;
    int arr[] = {0, 9, 0, 5, 4};
    left_rot(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int n2 = 5;
    int arr2[] = {1, 2, 3, 4, 5};
    left_rot_d(arr2, n2, 3);
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}
