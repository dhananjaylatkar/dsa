#include <bits/stdc++.h>
using namespace std;
void reverse_array(int arr[], int n)
{
    int low = 0;
    int high = n-1;
    while (low < high)
    {
        int tmp = arr[low];
        arr[low] = arr[high];
        arr[high] = tmp;
        low++;
        high--;
    }
}
int main (int argc, char *argv[])
{
    int n = 4;
    int arr[] = {121, 13, 9, 22};
    reverse_array(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

