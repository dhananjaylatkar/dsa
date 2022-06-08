// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
/* Given an array A[] of N positive integers which
 * can contain integers from 1 to P where elements
 * can be repeated or can be absent from the array.
 * Your task is to count the frequency of all elements from 1 to N.
 * Note: The elements greater than N in the array can be ignored for counting.
 */
// } Driver Code Ends
class Solution
{
   public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr, int N, int P)
    {
        // code here
        for (int j = 0; j < N; j++) arr[j] = arr[j] - 1;

        for (int i = 0; i < N; i++)
        {
            if (arr[i] % P >= N) continue;
            arr[arr[i] % P] += P;
        }

        for (int j = 0; j < N; j++) arr[j] /= P;
    }
};

// { Driver Code Starts.

int main()
{
    int N = 5, P = 5;

    vector<int> arr = {2, 3, 2, 3, 5};

    Solution ob;
    // calling frequncycount() function
    ob.frequencyCount(arr, N, P);

    // printing array elements
    for (int i = 0; i < N; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}

// } Driver Code Ends
