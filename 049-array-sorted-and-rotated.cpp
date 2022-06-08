#include <bits/stdc++.h>
using namespace std;

/* Given an array arr[] of N distinct integers,
 * check if this array is Sorted (non-increasing or non-decreasing)
 * and Rotated counter-clockwise.
 * Note that input array may be sorted in either
 * increasing or decreasing order, then rotated.
 * A sorted array is not considered as sorted and rotated,
 * i.e., there should be at least one rotation.
 */

class Solution
{
   public:
    // arr: input array
    // num: length of array
    // This function returns true or false
    // Function to check if array is sorted and rotated.
    bool checkInc(int arr[], int num)
    {
        int min_idx = 0;
        for (int i = 1; i < num; i++)
        {
            if (arr[i] < arr[min_idx])
            {
                min_idx = i;
            }
        }

        for (int i = 1; i < min_idx; i++)
        {
            if (arr[i] < arr[i - 1]) return false;
        }
        for (int i = min_idx + 2; i < num; i++)
        {
            if (arr[i] < arr[i - 1]) return false;
        }
        return arr[num - 1] < arr[0];
    }
    bool checkDec(int arr[], int num)
    {
        int max_idx = 0;
        for (int i = 1; i < num; i++)
        {
            if (arr[i] > arr[max_idx])
            {
                max_idx = i;
            }
        }

        for (int i = 1; i < max_idx; i++)
        {
            if (arr[i] > arr[i - 1]) return false;
        }
        for (int i = max_idx + 2; i < num; i++)
        {
            if (arr[i] > arr[i - 1]) return false;
        }
        return arr[num - 1] > arr[0];
    }
    bool checkRotatedAndSorted(int arr[], int num)
    {
        // Your code here
        return checkInc(arr, num) || checkDec(arr, num);
    }
};

// { Driver Code Starts.

int main()
{
    int num = 5;
    int arr[] = {30, 20, 10, 50, 25};
    bool flag = false;
    Solution ob;

    // function call
    flag = ob.checkRotatedAndSorted(arr, num);

    // printing "No" if not sorted and
    // rotated else "Yes"
    if (!flag)
    {
        cout << "No" << endl;
    }
    else
        cout << "Yes" << endl;

    return 0;
}  // } Driver Code Ends
