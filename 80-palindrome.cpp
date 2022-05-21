#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s)
{
    int len = s.size();
    int l = 0;
    int h = len - 1;
    while (l <= h)
    {
        if (s[l] != s[h])
        {
            return false;
        }
        l++;
        h--;
    }
    return true;
}

int main(int argc, char *argv[])
{
    cout << is_palindrome("abba") << endl;
    cout << is_palindrome("abb") << endl;
    cout << is_palindrome("abrba") << endl;
    cout << is_palindrome("abvbvba") << endl;
    return 0;
}
