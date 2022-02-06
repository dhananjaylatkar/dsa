#include <bits/stdc++.h>
using namespace std;
int stock_profit(int arr[], int n)
{
    int profit = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] > arr[j - 1])
        {
            profit += arr[j] - arr[j - 1];
        }
    }
    return profit;
}
int main(int argc, char *argv[])
{
    int n = 5;
    int arr[] = {1, 5, 3, 8, 12};
    cout << stock_profit(arr, n) << endl;
    return 0;
}
