#include <bits/stdc++.h>
using namespace std;

vector<int> prev_smallest(vector<int> &nums)
{
    int n = nums.size();
    vector<int> res(n);
    stack<int> s;
    s.push(0);
    res[0] = -1;

    for (int i = 1; i < n; i++)
    {
        while (!s.empty() && nums[s.top()] >= nums[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            res[i] = -1;
        }
        else
        {
            res[i] = s.top();
        }
        s.push(i);
    }
    return res;
}
vector<int> next_smallest(vector<int> &nums)
{
    int n = nums.size();
    vector<int> res(n);
    stack<int> s;
    s.push(n - 1);
    res[n - 1] = n;

    for (int i = n - 2; i >= 0; i--)
    {
        while (!s.empty() && nums[s.top()] >= nums[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            res[i] = n;
        }
        else
        {
            res[i] = s.top();
        }
        s.push(i);
    }
    return res;
}

int largest_area(vector<int> &nums)
{
    int res = 0;
    vector<int> ps = prev_smallest(nums);
    vector<int> ns = next_smallest(nums);
    // for(auto i : ps) cout << i<< " "; cout << endl;
    // for(auto i : ns) cout << i<< " "; cout << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        int curr_area = nums[i];
        curr_area += (ns[i] - i - 1) * nums[i];
        curr_area += (i - ps[i] - 1) * nums[i];
        res = max(res, curr_area);
    }
    return res;
}

int getMaxArea(int arr[], int n)
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

int main(int argc, char *argv[])
{
    vector<int> nums = {6, 2, 5, 4, 1, 5, 6};
    for (auto s : nums) cout << s << " ";
    cout << endl;
    int res = largest_area(nums);
    cout << res << endl;
    return 0;
}
