// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* Given an array arr[] of size N
 * where every element is in the range from 0 to n-1.
 * Rearrange the given array so that arr[i] becomes arr[arr[i]].
 */

class Solution
{
   public:
    // arr: input array
    // n: size of array
    // Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    // with O(1) extra space.
    void arrange(long long arr[], int n)
    {
        // Your code here
        for (int i = 0; i < n; i++)
        {
            arr[i] += (arr[arr[i]] % n) * n;
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] /= n;
        }
    }
};

// { Driver Code Starts.

int main()
{
    int n = 5;
    long long A[] = {4, 0, 2, 1, 3};
    Solution ob;
    // calling arrange() function
    ob.arrange(A, n);

    // printing the elements
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}  // } Driver Code Endse
