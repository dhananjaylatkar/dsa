#include <bits/stdc++.h>
using namespace std;
/* Find len of longest consecutive subsequence
 * in given arr.
 */
int lcs(int arr[], int n)
{
    int res = 0;
    // Put all elements in hash table.
    unordered_set<int> s(arr, arr + n);
    for (auto itm : s)
    {
        /* if itm-1 is not present is set
         * then itm is first elem in subsequence
         */
        if (s.find(itm - 1) == s.end())
        {
            /* Check for all subsequent elems
             * in set and increment counter
             */
            int tmp = itm + 1;
            int curr_count = 1;
            while (s.find(tmp) != s.end())
            {
                curr_count++;
                tmp++;
            }
            res = max(res, curr_count);
        }
    }
    return res;
}
int main(int argc, char *argv[])
{
    int arr[] = {1, 3, 9, 8, 2};
    int n = 5;
    cout << lcs(arr, n) << endl;

    return 0;
}
