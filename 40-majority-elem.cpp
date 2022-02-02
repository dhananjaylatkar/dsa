#include <bits/stdc++.h>
using namespace std;
int majority(int arr[], int n)
{
    /* Majority element is an element that appears
     * more than n/2 times in an array of size n.
     */
    int count = 1;
    int res = 0;
    for (int i = 1; i < n; i++) {
        if (arr[res] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            count = 1;
            res = i;
        }
    }

    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[res] == arr[i])
        {
            count++;
        }
    }
    if (count <= n/2)
    {
        res = -1;
    }
    return res;
}

int main (int argc, char *argv[])
{
    int n = 5;
    int arr[] = {8, 8, 6, 7, 8};
    cout << majority(arr, n) << endl;
    return 0;
}

