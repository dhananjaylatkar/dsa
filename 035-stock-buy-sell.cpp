#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> stockBuySell(vector<int> A, int n)
{
    vector<vector<int>> res;
    vector<int> buy(n);
    for (int i = 1; i < n; i++)
    {
        if (A[i] > A[i - 1])
        {
            buy[i - 1] = 1;
        }
    }
    int i = 0;
    while (i < n)
    {
        if (buy[i] == 1)
        {
            vector<int> tmp;
            tmp.push_back(i);
            // cout << i << " ";
            i++;
            while (buy[i] == 1)
            {
                i++;
            }
            // cout << i << "\n";
            tmp.push_back(i);
            res.push_back(tmp);
        }
        else
        {
            i++;
        }
    }

    return res;
}
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
