#include <bits/stdc++.h>
using namespace std;

/*  Given an array of distinct integers, find the NextGreater(position-wise
 * closest and on the right side) of every array elements.
 */
vector<int> next_greater(vector<int> &nums)
{
    int n = nums.size();
    vector<int> res(n, 0);
    stack<int> s;

    s.push(nums[n - 1]);
    res[n - 1] = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        while (!s.empty() && s.top() < nums[i])
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
        s.push(nums[i]);
    }
    return res;
}

int main(int argc, char *argv[])
{
    vector<int> nums = {5, 15, 10, 8, 6, 12, 9, 18};
    vector<int> res = next_greater(nums);
    for (auto s : nums) cout << s << " ";
    cout << endl;
    for (auto r : res) cout << r << " ";
    cout << endl;
    return 0;
}
