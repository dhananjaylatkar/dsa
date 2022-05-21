#include <iostream>
#include <string>
#include <vector>
using namespace std;

int non_rep(string &str)
{
    // idx vector contents ->
    // -1: char not in string
    // -2: char is repeated
    // >0: index of char
    cout << str << endl;
    vector<int> idx(256, -1);
    int len = str.length();

    for (int i = 0; i < len; i++)
    {
        if (idx[str[i]] == -1)
        {
            idx[str[i]] = i;
        }
        else
        {
            idx[str[i]] = -2;
        }
    }

    int res = INT_MAX;
    for (int i = 0; i < len; i++)
    {
        if (idx[str[i]] >= 0)
        {
            res = min(res, idx[str[i]]);
        }
    }
    return (res == INT_MAX) ? -1 : res;
}

int main(int argc, char *argv[])
{
    string str = "aabbcde";
    cout << non_rep(str) << endl;
    str = "abcde";
    cout << non_rep(str) << endl;
    str = "aabb";
    cout << non_rep(str) << endl;
    return 0;
}
