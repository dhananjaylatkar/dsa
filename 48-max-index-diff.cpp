// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/*Given an array A[] of N positive integers.
 * The task is to find the maximum of j - i
 * to the constraint of A[i] < A[j] and i < j.
 */
// } Driver Code Ends
class Solution
{
   public:
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N)
    {
        // Your code here
        vector<int> Lmin(N);
        vector<int> Rmax(N);
        Lmin[0] = A[0];
        for (int i = 1; i < N; i++)
        {
            Lmin[i] = min(A[i], Lmin[i - 1]);
        }
        Rmax[N - 1] = A[N - 1];
        for (int i = N - 2; i >= 0; i--)
        {
            Rmax[i] = max(A[i], Rmax[i + 1]);
        }
        // for (int i = 0; i<N; i++)
        //     cout << Lmin[i] << " ";
        // cout << endl;
        // for (int i = 0; i<N; i++)
        //     cout << Rmax[i] << " ";
        // cout << endl;
        // cout << endl;
        int l = 0;
        int r = 0;
        int res = -1;
        while (l < N && r < N)
        {
            if (Lmin[l] <= Rmax[r])
            {
                res = max(res, r - l);
                // cout << A[l] << " " << A[r] << " " << r-l << " " << res <<
                // endl;
                r++;
            }
            else
            {
                l++;
            }
        }
        return res;
    }
};

// { Driver Code Starts.

/* Driver program to test above functions */
int main()
{
    int num = 9;
    int arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    Solution ob;

    // calling maxIndexDiff() function
    cout << ob.maxIndexDiff(arr, num) << endl;

}  // } Driver Code Ends
