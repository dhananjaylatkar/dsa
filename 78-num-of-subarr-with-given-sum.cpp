#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
   public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
        // Your code here
        int prefix_sum = 0;
        unordered_map<int, int> m;
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            // cout << i << " " ;
            prefix_sum += arr[i];

            if (prefix_sum == sum)
            {
                // cout << "1st ";
                res++;
            }
            if (m.find(prefix_sum - sum) != m.end())
            {
                // cout << "2nd ";
                // if sum is found increment res by total number of prefix_sums
                // found in arr
                res += m[prefix_sum - sum];
            }
            // cout << prefix_sum << " " << prefix_sum-sum << " " << res <<
            // endl;
            m[prefix_sum]++;
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        cin >> sum;
        Solution obj;
        cout << obj.subArraySum(arr, n, sum) << endl;
    }
    return 0;
}  // } Driver Code Ends
