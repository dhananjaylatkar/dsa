#include <bits/stdc++.h>
using namespace std;
/* Given 2 strings s1 and s2, determine if s2 is
 * sub sequence of s1.
 */
bool is_sub_seq(string s1, string s2, int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        /* increment both pointers if curr char is same
         * else only increment s2 pointer
         */
        if (s1[i] == s2[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    return j == m;
}

bool is_sub_seq_rec(string s1, string s2, int n, int m)
{
    if (m == 0) return true;
    if (n == 0) return false;
    if (s1[n - 1] == s2[m - 1])
    {
        return is_sub_seq_rec(s1, s2, n - 1, m - 1);
    }
    else
    {
        return is_sub_seq_rec(s1, s2, n - 1, m);
    }
}

int main(int argc, char *argv[])
{
    cout << is_sub_seq("ABCDEF", "ADE", 6, 3) << endl;
    cout << is_sub_seq_rec("ABCDEF", "ADE", 6, 3) << endl;
    cout << is_sub_seq("ABCDEF", "AFE", 6, 3) << endl;
    cout << is_sub_seq_rec("ABCDEF", "AFE", 6, 3) << endl;
    return 0;
}
