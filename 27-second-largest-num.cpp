#include <bits/stdc++.h>
using namespace std;
int second_largest(int arr[], int n)
{
    int res = -1;
    int max = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[max])
        {
            res = max;
            max = i;
        }
        else if (arr[i] != arr[max])
        {
            if (res == -1 || arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}
int main(int argc, char *argv[])
{
    int n = 4;
    int arr[] = {121, 13, 9, 22};
    cout << second_largest(arr, n) << endl;
    return 0;
}
