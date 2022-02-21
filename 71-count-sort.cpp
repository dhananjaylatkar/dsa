// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255

// } Driver Code Ends
// User function Template for C++

class Solution
{
   public:
    // Function to arrange all letters of a string in lexicographical
    // order using Counting Sort.
    string countSort(string arr)
    {
        // code here
        vector<int> count(26, 0);
        bool debug = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            count[arr[i] - 'a']++;
        }
        if (debug)
        {
            for (int i = 0; i < 26; i++)
            {
                cout << count[i] << " ";
            }
            cout << endl;
        }
        int idx = 0;
        for (int i = 0; i < 26; i++)
        {
            int cou = count[i];
            while (cou > 0)
            {
                arr[idx] = 'a' + i;
                idx++;
                cou--;
            }
        }
        return arr;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string arr;
        cin >> arr;
        Solution obj;
        cout << obj.countSort(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends
