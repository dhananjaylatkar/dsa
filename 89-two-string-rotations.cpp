#include <bits/stdc++.h>
using namespace std;
/* Check if s1 is rotation of s2 */

bool is_rot(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    // Concatinate s1 and s2 and search for
    // s2 in new string.
    return ((s1 + s2).find(s2) != string::npos);
}

int main(int argc, char *argv[])
{
    cout << is_rot("ABCD", "CDAB") << endl;
    cout << is_rot("ABCD", "CDABA") << endl;
    return 0;
}
