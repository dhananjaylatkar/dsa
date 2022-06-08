#include <bits/stdc++.h>
using namespace std;

/*  Given an array of distinct integers, find the closest (positive wise)
 * greater on left of every element. If there is no greater element on l;eft,
 * then print -1
 */
vector<int> prev_greater(vector<int> &nums)
{
    vector<int> res;
    stack<int> s;
    s.push(nums[0]);
    res.push_back(-1);

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < nums[i - 1])
        {
            res.push_back(nums[i - 1]);
            s.push(nums[i - 1]);
        }
        else
        {
            while (!s.empty() && s.top() < nums[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                res.push_back(-1);
            }
            else
            {
                res.push_back(s.top());
            }
        }
    }
    return res;
}
void printPrevGreater(int arr[], int n)
{
    // from gfg lecture
    stack<int> s;
    s.push(arr[0]);
    for (int i = 0; i < n; i++)
    {
        while (s.empty() == false && s.top() <= arr[i]) s.pop();
        int pg = s.empty() ? -1 : s.top();
        cout << pg << " ";
        s.push(arr[i]);
    }
}
int main(int argc, char *argv[])
{
    vector<int> nums = {20, 30, 10, 5, 15};
    vector<int> res = prev_greater(nums);
    for (auto s : nums) cout << s << " ";
    cout << endl;
    for (auto r : res) cout << r << " ";
    cout << endl;
    return 0;
}
