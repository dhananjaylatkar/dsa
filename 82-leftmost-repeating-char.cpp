#include <bits/stdc++.h>
using namespace std;

/* Given a string, the task is to find the first character (whose leftmost
 * appearance is first) that repeats.
 */

int rep(string &str)
{
    /*
     * Travel from right to left and keep track of visited char.
     */
    vector<bool> visited(256, false);
    int len = str.size();
    int res = -1;
    for (int i = len - 1; i > 0; i--)
    {
        if (visited[str[i]])
        {
            res = i;
        }
        else
        {
            visited[str[i]] = true;
        }
    }
    return res;
}
int main(int argc, char *argv[])
{
    string str = "abbacc";
    cout << str[rep(str)] << endl;
    return 0;
}
