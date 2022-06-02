#include <bits/stdc++.h>
using namespace std;

/*
 * Given a text and a pattern, the task is to
 * find if there is anagram of pattern present in text.
 */
bool are_same(int a1[], int a2[])
{
    for (int i = 0; i < 256; i++)
    {
        if (a1[i] != a2[i]) return false;
    }
    return true;
}
bool anagram(string s, string p)
{
    // Fill count srr for string and patters
    int count_s[256] = {0}, count_p[256] = {0};

    for (int i = 0; i < p.length(); i++)
    {
        count_s[s[i]]++;
        count_p[p[i]]++;
    }

    for (int i = p.length(); i < s.length(); i++)
    {
        if (are_same(count_s, count_p)) return true;
        // If count are do not match then
        // increase count of curr char and decrease
        // count of previous char in window.
        // Sliding Window
        count_s[s[i]]++;
        count_s[s[i - p.length()]]--;
    }
    return false;
}

int main(int argc, char *argv[])
{
    string s = "geeksforgeeks";
    string p = "frog";

    cout << anagram(s, p) << endl;
    return 0;
}
