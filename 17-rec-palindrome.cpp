#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string &str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    return (str[start] == str[end]) && is_palindrome(str, start+1, end-1);
}

int main (int argc, char *argv[])
{
    string str;
    cin >> str;
    cout << is_palindrome(str, 0, str.length()-1) << endl;
    return 0;
}
