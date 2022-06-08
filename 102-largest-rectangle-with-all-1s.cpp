#include <bits/stdc++.h>
using namespace std;

int getMaxArea(vector<int> &arr, int n)
{
    // most efficient solution
    stack<int> s;
    int res = 0;
    int tp;
    int curr;

    for (int i = 0; i < n; i++)
    {
        while (s.empty() == false && arr[s.top()] >= arr[i])
        {
            tp = s.top();
            s.pop();
            curr = arr[tp] * (s.empty() ? i : i - s.top() - 1);
            res = max(res, curr);
        }
        s.push(i);
    }
    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        curr = arr[tp] * (s.empty() ? n : n - s.top() - 1);
        res = max(res, curr);
    }

    return res;
}

int largest_rec(vector<vector<int>> mat)
{
    int m = mat.size();
    int n = mat[0].size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - 1 >= 0)
            {
                if (mat[i][j])
                {
                    mat[i][j] += mat[i - 1][j];
                }
            }
        }
        res = max(res, getMaxArea(mat[i], n));
    }
    return res;
}

int main(int argc, char *argv[])
{
    vector<vector<int>> mat = {
        {0, 1, 1, 0}, {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 0, 0}};
    cout << largest_rec(mat) << endl;
    return 0;
}
