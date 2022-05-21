#include <bits/stdc++.h>
using namespace std;

const int CHAR = 256;
int fact(int n) { return (n <= 1) ? 1 : n * fact(n - 1); }

int lexRank(string &str)
{
    int res = 1;
    int n = str.length();
    int mul = fact(n);
    // Create an cumulative count arr to get number of
    // chars smaller than curr char to the left of string.
    int count[CHAR] = {0};
    for (int i = 0; i < n; i++) count[str[i]]++;
    for (int i = 1; i < CHAR; i++) count[i] += count[i - 1];

    for (int i = 0; i < n - 1; i++)
    {
        mul = mul / (n - i);
        res = res + count[str[i] - 1] * mul;
        // after each iteration decrement cumulative
        // count by 1 on right side of count arr.
        // This makes sure consumed char is removed from
        // cumulative arr.
        for (int j = str[i]; j < CHAR; j++) count[j]--;
    }
    return res;
}

int main()
{
    string str = "STRING";
    cout << lexRank(str) << endl;
    return 0;
}
